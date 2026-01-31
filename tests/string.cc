#include<iostream>
#include<string>
#include<vector>

int main(){
  std::string ecuation = "log(185*(8))/cos(2*pi)";
  int j, tam = ecuation.size();
  std::string secondec; 
  std::vector<int> parentheses;
  std::vector<std::string> ecuation_parts;

  for(int i{tam-1}; i>=0 ; --i){ //Reversed for bucle
    if(ecuation[i] == ')'){ 
      parentheses.push_back(i);
    }

    if(ecuation[i] == '('){
      j = i+1;
      while (j != parentheses.back()){
        secondec.push_back(ecuation[j]);
        j++;
      }
      parentheses.pop_back(); //remove the last position saved in the vector
      std::cout << secondec << std::endl;
      ecuation_parts.push_back(secondec);
      secondec = ""; //clean the string
    }
  }//close for
  int vectam = ecuation_parts.size();
  int minvec{999999999999};
  for(int i{0}; i<vectam ; ++i){
    std::cout<< ecuation_parts[i] << " | " << ecuation_parts[i].size() << std::endl;
    if(minvec > ecuation_parts[i].size())
      minvec = ecuation_parts[i].size();
  }//close for
  std::cout << minvec << std::endl;
  return 0;
}