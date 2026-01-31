

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


  //#######################################################################################################
double solve_parentheses(std::string ecuation){
  int tam = ecuation.size();
  char a;
  int j;
  std::string secondec;
  std::vector<std::string> parentheses;

  for(int i{tam-1}; i>=0 ; --i){ //Reversed for bucle
    if(ecuation[i] == '('){
      j = i;
      while(a != ')'){
        secondec.push_back(ecuation[j]);
        a = ecuation[j];
        j++;
        }//close while
      std::cout << secondec << std::endl;
    }//close if
  }//close for
  return solve_functions(ecuation); //UNA VEZ RESUELTOS LOS PARENTESIS RESOLVEMOS LAS ECUACIONES
}
  //#######################################################################################################

  double solve_parentheses(std::string ecuation){
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
      parentheses.pop_back();
      std::cout << secondec << std::endl;
      ecuation_parts.push_back(secondec);
      secondec = "";
    } //SEPARA LOS CONTENIDOS DE LOS PARENTESIS Y LOS GUARDA EN UN VECTOR

    //#######################################################################################################

    double solve_parentheses(std::string ecuation){
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
  //Now, in the vector ecuation_parts we have the contents of the parentheses
  int vectam = ecuation_parts.size();
  int mintam{999999999}, minpos;
  for(int i{0}; i<vectam ; ++i){
    if(mintam > ecuation_parts[i].size()){ //if the previous min size is bigger than the new size
      mintam = ecuation_parts[i].size(); //the min size is this new size
      minpos = i; //the position of the min string is this new position
      }
  }//close for
  //Now, the position in the vector where is the smallest string is minpos
  std::cout << minpos << std::endl;
  return solve_functions(ecuation); //UNA VEZ RESUELTOS LOS PARENTESIS RESOLVEMOS LAS ECUACIONES
}