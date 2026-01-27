#include<iostream>
#include<string>
#include<cmath>

#include"function_detection.cc"

int main(int argc, char *argv[]){
  if(argc == 1){
    std::cerr << "Invalid number of parameters \n";
    return 1;
  }

  if(argc == 2){
    std::string ecuation = argv[1];
    detect(ecuation);
    return 0;
  }

  if(argc == 3){
  return 0;
  }
  return 0;
}