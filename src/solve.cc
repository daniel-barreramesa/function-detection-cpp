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


double solve_functions(std::string ecuation);
double solve_powers(std::string ecuation);
double solve_products(std::string ecuation);
double solve_sum(std::string ecuation);


double solve(std::string ecuation){ //ESTA TIENE QUE IR ABAJO DEL TODO
  double result = solve_parentheses(ecuation);
  return result;
}

double solve_parentheses(std::string ecuation){
  int tam = ecuation.size();

  for(int i{0}; i<tam ; ++i){
    if(ecuation[i] == '('){
      
    }
  }//close for
}