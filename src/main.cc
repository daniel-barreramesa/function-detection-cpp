/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología.
 * Grado en Ingeniería Informática
 * Informática Básica 2025-2026
 * 
 * @file main.cc
 * @author alu0101742830@ull.edu.es
 * @date En 27 2026
 * @bug There are no known bugs
**/
#include<iostream>
#include<string>

#include"function_detection.cc"
#include"solve.cc"

int main(int argc, char *argv[]){
  if(argc == 1){
    std::cerr << "Invalid number of parameters \n";
    return 1;
  }

  if(argc == 2){
    std::string ecuation = argv[1];
    std::string result = transalate(ecuation);
    std::cout << result << std::endl;
    return 0;
  }

  if(argc == 3){
  std::string function = argv[1];
  std::string command = argv[2];
  if (command == "-solve"){
    int a = detect_x(function);
    if(a == 1)
      return 1;
    std::string ecuation = transalate(function); //uses the Transalate system to be easier to solve
    double result = solve(ecuation);
    }
  return 0;
  }
  return 0;
}