#include<iostream>
#include<string>
#include<cmath>

void detect(std::string ecuation){
    int parnum {0}; //the number of oppened parentheses
    int parpos {0};
    int lenght = ecuation.size(); //takes the lenght of the ecuation
    for(int i{0}; i<lenght; ++i){ //use a for bucle to traverse the ecuation
      if(ecuation[i]=='('){ //search parentheses
        parnum++;
        parpos = i; //saves the position of the last parentheses
      }
      if(ecuation[i]==')'){ //search parentheses
        parnum++;
      }
    }
}