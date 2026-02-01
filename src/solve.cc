#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include "functions.h"
#include "parentheses_functions.cc"


int detect_x(std::string ecuation){ //search x in the ecuation
    int tam = ecuation.size();
    for(int i{0}; i<tam ; ++i){
        if(ecuation[i] == 'x'){
         std::cout << "There are unknown variables in the ecuation\n";
         return 1;
        }
    }
 return 0;
}

/*
* THIS IS THE SOLVE ALGORITHM. 
*/
//#########################################################################################################
std::string solve_parentheses(std::string ecuation){
  int j, tam = ecuation.size();
  std::string secondec; 
  std::vector<int> parentheses;
  std::vector<std::string> ecuation_parts;

  for(int i{tam-1}; i>=0 ; --i){ //Reversed for bucle
    if(ecuation[i] == ')'){ 
      parentheses.push_back(i);
    }

    if(ecuation[i] == '('){
      j = i+1;
      while (j != parentheses.back()){
        secondec.push_back(ecuation[j]);
        j++;
      }
      parentheses.pop_back(); //remove the last position saved in the vector
      std::cout << secondec << std::endl;
      ecuation_parts.push_back(secondec);
      secondec = ""; //clean the string
    }
  }//close for
  //Now, in the vector ecuation_parts we have the contents of the parentheses

  int minpos = search_minpos(ecuation_parts);
  if(minpos != -1){
    ecuation.replace(ecuation.find(ecuation_parts[minpos]), ecuation_parts[minpos].length(), second_solve(ecuation_parts[minpos])); //replace the solved ecuation to the original
    ecuation_parts[minpos] = second_solve(ecuation_parts[minpos]); //solve the min and replaces it as a string
    std::cout << "the ecuation: " << ecuation << std::endl;
    return solve_parentheses(ecuation);
  } //close if
  std::cout << "The position of the min: " << minpos << std::endl;
  std::cout << "the ecuation is: " << ecuation << std::endl;
  return second_solve(ecuation); //UNA VEZ RESUELTOS LOS PARENTESIS RESOLVEMOS LAS FUNCIONES
}

std::string solve_functions(std::string ecuation){
  //BUSCAMOS FUNCIONES POR SU CODIGO Y RESOLVEMOS LO DE DENTRO
  int j;
  std::string secondec;
  double result;
  for(int i{0}; i<ecuation.size(); ++i){
    if(ecuation[i] == 'l'){
      j = i+2;
      while (ecuation[j] != ')'){
        secondec.push_back(ecuation[j]);
        j++;
      }
      result = log(std::stod(secondec));
      ecuation.replace(ecuation.find(secondec)-2, secondec.size()+3, std::to_string(result));
    }
  }
  std::cout << "----------------\n" << ecuation << std::endl;
  return solve_powers(ecuation); //UNA VEZ RESUELTAS LAS FUNCIONES RESOLVEMOS LAS POTENCIAS
}

std::string solve_powers(std::string ecuation){
  //BUSCAMOS PORENCIAS ^ Y LAS RESOLVEMOS
  return solve_products(ecuation); //UNA VEZ RESUELTAS LAS POTENCIAS RESOLVEMOS LAS * Y /
}

std::string solve_products(std::string ecuation){
  //BUSCAMOS * Y / Y LAS RESOLVEMOS
  return solve_sum(ecuation); //UNA VEZ RESUELTAS LAS POTENCIAS RESOLVEMOS SUMAS Y RESTAS
}

std::string solve_sum(std::string ecuation){
  //BUSCAMOS + Y - Y LAS RESOLVEMOS
  return solve_num(ecuation);
}

std::string solve_num(std::string ecuation){
  std::string result{""};
  //BUSCAMOS NUMEROS DENTRO DE LA STRING Y LOS TRANSFORMASMOS DE STRING A DOUBLE
  return result;
}
//#########################################################################################################


double return_num(std::string ecuation){
  ecuation = "123";
  return std::stod(ecuation);
}

double solve(std::string ecuation){ //This is the solve function
  std::string result = solve_parentheses(ecuation);
  return return_num(result);
}

std::string second_solve(std::string ecuation){ 
  return solve_functions(ecuation);
}

