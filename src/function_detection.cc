#include<iostream>
#include<string>
#include<cmath>
#include "functions.h"



std::string transalate(std::string ecuation){
  int lenght = ecuation.size();
  std::string result;

  for(int i{0}; i<lenght; ++i){
    if(ecuation[i] == '1' || ecuation[i] == '2' || ecuation[i] == '3' || ecuation[i] == '4' || ecuation[i] == '5' || ecuation[i] == '6' || ecuation[i] == '7' || ecuation[i] == '8' || ecuation[i] == '9')
      result.push_back(ecuation[i]); //push_back numbers

    else if(ecuation[i] == '+' || ecuation[i] == '-' || ecuation[i] == '*' || ecuation[i] == '/' || ecuation[i] == '^' || ecuation[i] == '(' || ecuation[i] == ')' || ecuation[i] == 'x')
      result.push_back(ecuation[i]); //push_back symbols

    else if(ecuation[i] == ' '){} //delete spaces

    else if(ecuation[i]== 'l' && ecuation[i+1]== 'n'){//search napierian logarithm
      result.push_back('l');
      i++;
    }
  
    else if(ecuation[i]== 's' && ecuation[i+1]== 'e' && ecuation[i+2]== 'n'){ //search sine
      result.push_back('s');
      i += 2;
    }
  
    else if(ecuation[i]== 'c' && ecuation[i+1]== 'o' && ecuation[i+2]== 's'){//search cosine
      result.push_back('c');
      i += 2;
    }

    else if(ecuation[i]== 't' && ecuation[i+1]== 'g'){//search tangent
      result.push_back('t');
      i++;
    }

  }
  return result;
}
