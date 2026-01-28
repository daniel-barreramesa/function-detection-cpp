#include<iostream>
#include<string>
#include<cmath>
#include "functions.h"

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
  int tam = ecuation.size();

  for(int i{0}; i<tam ; ++i){ //RECORRE LA ECUACION EN BUSCA DE PARENTESIS Y RESUELVE LOS PARENTESIS PRIMERO
    //QUIERO QUE SE RESUELVAN LOS PARENTESIS DEL MAS PEQUEÑO AL MAS GRANDE
  }//close for
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
  double result;
  //BUSCAMOS NUMEROS DENTRO DE LA STRING Y LOS TRANSFORMASMOS DE STRING A DOUBLE
  return result;
}
//#########################################################################################################


double solve(std::string ecuation){ //This is the solve function
  double result = solve_parentheses(ecuation);
  return result;
}
