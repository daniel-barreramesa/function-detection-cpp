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
double solve_parentheses(std::string ecuation){
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
  std::cout << "The position of the min: " << minpos << std::endl;

/*
  for(int i{0}; i<ecuation_parts[minpos].size(); ++i){ //look if the min ecuation is already solved
    if(ecuation_parts[minpos][i] != '0' || ecuation_parts[minpos][i] != '1' || ecuation_parts[minpos][i] != '2' || ecuation_parts[minpos][i] != '3' || ecuation_parts[minpos][i] != '4' || ecuation_parts[minpos][i] != '5' || ecuation_parts[minpos][i] != '6' || ecuation_parts[minpos][i] != '7' || ecuation_parts[minpos][i] != '8' || ecuation_parts[minpos][i] != '9' ){
      solve(ecuation_parts[minpos]);
    }
    else
      ecuation_parts.erase(ecuation_parts.begin() + minpos);
  }
*/

  return solve_functions(ecuation); //UNA VEZ RESUELTOS LOS PARENTESIS RESOLVEMOS LAS ECUACIONES
}

double solve_functions(std::string ecuation){
  //BUSCAMOS FUNCIONES POR SU CODIGO Y RESOLVEMOS LO DE DENTRO
  return solve_powers(ecuation); //UNA VEZ RESUELTAS LAS FUNCIONES RESOLVEMOS LAS POTENCIAS
}

double solve_powers(std::string ecuation){
  //BUSCAMOS PORENCIAS ^ Y LAS RESOLVEMOS
  return solve_products(ecuation); //UNA VEZ RESUELTAS LAS POTENCIAS RESOLVEMOS LAS * Y /
}

double solve_products(std::string ecuation){
  //BUSCAMOS * Y / Y LAS RESOLVEMOS
  return solve_sum(ecuation); //UNA VEZ RESUELTAS LAS POTENCIAS RESOLVEMOS SUMAS Y RESTAS
}

double solve_sum(std::string ecuation){
  //BUSCAMOS + Y - Y LAS RESOLVEMOS
  return solve_num(ecuation);
}

double solve_num(std::string ecuation){
  double result{0};
  //BUSCAMOS NUMEROS DENTRO DE LA STRING Y LOS TRANSFORMASMOS DE STRING A DOUBLE
  return result;
}
//#########################################################################################################


double solve(std::string ecuation){ //This is the solve function
  double result = solve_parentheses(ecuation);
  return result;
}
