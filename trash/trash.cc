

double solve_parentheses(std::string ecuation){
  int tam = ecuation.size();
  char a;
  std::string secondec;
  std::vector<std::string> parentheses;
  int j;

  for(int i{0}; i<tam ; ++i){ 
    if(ecuation[i] == ')'){
      j = i;
      while (a!= '('){
        secondec.push_back(ecuation[j]);
        a = ecuation[j];
        j--;
      }
      std::cout << secondec << std::endl;
    }
  }//close for
  return solve_functions(ecuation); //UNA VEZ RESUELTOS LOS PARENTESIS RESOLVEMOS LAS ECUACIONES