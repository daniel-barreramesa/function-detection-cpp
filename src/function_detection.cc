#include<iostream>
#include<string>
#include<cmath>
#include "functions.h"



std::string transalate(std::string ecuation){
  int lenght = ecuation.size();
  std::string result;
  int cont{0};

  for(int i{0}; i<lenght; ++i){

    if(ecuation[i] == '(')
      cont ++;

    if (ecuation[i] == ')')
      cont --;

    if(ecuation[i] == '1' || ecuation[i] == '2' || ecuation[i] == '3' || ecuation[i] == '4' || ecuation[i] == '5' || ecuation[i] == '6' || ecuation[i] == '7' || ecuation[i] == '8' || ecuation[i] == '9' || ecuation[i] == '0')
      result.push_back(ecuation[i]); //push_back numbers

    else if(ecuation[i] == '+' || ecuation[i] == '-' || ecuation[i] == '*' || ecuation[i] == '/' || ecuation[i] == '^' || ecuation[i] == '(' || ecuation[i] == ')' || ecuation[i] == 'x' || ecuation[i] == 'e')
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

    else if(ecuation[i]== 'a' && ecuation[i+1]== 'r' && ecuation[i+2]== 'c' && ecuation[i+3]== 's' && ecuation[i+4]== 'e' && ecuation[i+5]== 'n'){//search arcsen
      result.push_back('S');
      i+=5;
    }

    else if(ecuation[i]== 'a' && ecuation[i+1]== 'r' && ecuation[i+2]== 'c' && ecuation[i+3]== 'c' && ecuation[i+4]== 'o' && ecuation[i+5]== 's'){//search arccos
      result.push_back('C');
      i+=5;
    }

    else if(ecuation[i]== 'a' && ecuation[i+1]== 'r' && ecuation[i+2]== 'c' && ecuation[i+3]== 't' && ecuation[i+4]== 'g'){//search arctg
      result.push_back('T');
      i+=4;
    }

    else if(ecuation[i]== 'p' && ecuation[i+1]== 'i'){//search pi
      result.push_back('p');
      i++;
    }

    else if(ecuation[i]== 's' && ecuation[i+1]== 'q' && ecuation[i+2]== 'r' && ecuation[i+3]== 't'){//search square root
      result.push_back('r');
      i+=3;
    }

    else if(ecuation[i]== 'c' && ecuation[i+1]== 'b' && ecuation[i+2]== 'r' && ecuation[i+3]== 't'){//search cubic root
      result.push_back('R');
      i+=3;
    }

    else if(ecuation[i]== 'l' && ecuation[i+1]== 'o' && ecuation[i+2]== 'g'){//search logarithm
      result.push_back('L');
      i+=2;
    }
    
    else { //in case of unknown symbols
      std::cerr << "syntax error \n";
      return "";
    }
  }

  if (cont != 0){ //check for oppened bracket
    std::cerr << "syntax error \n";
    if(cont < 0)
      std::cerr << "Missing ( \n";
    else
      std::cerr << "Missing ) \n";
    return "";
  }
  return result;
}
