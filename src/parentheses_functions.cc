#include<iostream>
#include<string>
#include<vector>
#include "functions.h"

int search_minpos(std::vector<std::string> ecuation_parts){ //search the position of the min unresolved ecuation
  int vectam = ecuation_parts.size();
  int mintam{999999999}, minpos{-1};
  for(int i{0}; i<vectam ; ++i){ 
    if(mintam > ecuation_parts[i].size()){
      for(int j{0}; j<ecuation_parts[i].size(); ++j){ //look if the min ecuation is already solved
        if(ecuation_parts[i][j] == '0' || ecuation_parts[i][j] == '1' || ecuation_parts[i][j] == '2' || ecuation_parts[i][j] == '3' || ecuation_parts[i][j] == '4' || ecuation_parts[i][j] == '5' || ecuation_parts[i][j] == '6' || ecuation_parts[i][j] == '7' || ecuation_parts[i][j] == '8' || ecuation_parts[i][j] == '9' ){
        }
        else{
          mintam = ecuation_parts[i].size(); 
          minpos = i;
        }
      }
    }
  }
  return minpos;
}

