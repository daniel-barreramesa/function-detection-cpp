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
  return 0;
  }
  return 0;
}