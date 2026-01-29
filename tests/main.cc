#include<iostream>
#include<cmath>
#include<string>

int main(){
  float a{2}, result;
  std::string b = "2";
  double c = std::stod(b); //Transform a string into a real number
  result = sqrt(c);

  std::cout << result << std::endl;
  return 0;
}
