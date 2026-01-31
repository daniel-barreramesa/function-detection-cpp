#include<iostream>
#include<string>
#include<vector>
#include "functions.h"

int search_minpos(std::vector<std::string> ecuation_parts){ //search the position of the min ecuation
  int vectam = ecuation_parts.size();
  int mintam{999999999}, minpos;
  for(int i{0}; i<vectam ; ++i){ 
    if(mintam > ecuation_parts[i].size()){ 
      mintam = ecuation_parts[i].size(); 
      minpos = i;
      }
  }
  return minpos;
}

