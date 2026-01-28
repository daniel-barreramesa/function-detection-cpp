#include<iostream>
#include<string>
#include<cmath>
#include "functions.h"



std::string detect(std::string ecuation){
  int lenght = ecuation.size();
  for(int i{0}; i<lenght; ++i){ //search napierian logarithm
    if(ecuation[i]== 'l' && ecuation[i+1]== 'n')
      std::cout << "napierian logarithm \n";
  
    if(ecuation[i]== 's' && ecuation[i+1]== 'e' && ecuation[i+2]== 'n') //search sine
      std::cout << "sine \n";
  
    if(ecuation[i]== 'c' && ecuation[i+1]== 'o' && ecuation[i+2]== 's')//search cosine
      std::cout << "cosine \n";

    if(ecuation[i]== 't' && ecuation[i+1]== 'g')//search tangent
      std::cout << "tangent \n";
  }
  return "";
}
