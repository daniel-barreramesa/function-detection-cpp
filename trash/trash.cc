

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

  //#######################################################################################################
int search_minpos(std::vector<std::string> ecuation_parts){ //search the position of the min unresolved ecuation
  if (ecuation_parts.empty()){
    return -1;
  }
  else{
  int vectam = ecuation_parts.size();
  int mintam{999999999}, minpos{0};
  for(int i{0}; i<vectam ; ++i){ 
    if(mintam > ecuation_parts[i].size()){
      mintam = ecuation_parts[i].size(); 
      minpos = i;
      }
  }
  
  for(int i{0}; i<ecuation_parts[minpos].size(); ++i){ //look if the min ecuation is already solved
    if(ecuation_parts[minpos][i] == '0' || ecuation_parts[minpos][i] == '1' || ecuation_parts[minpos][i] == '2' || ecuation_parts[minpos][i] == '3' || ecuation_parts[minpos][i] == '4' || ecuation_parts[minpos][i] == '5' || ecuation_parts[minpos][i] == '6' || ecuation_parts[minpos][i] == '7' || ecuation_parts[minpos][i] == '8' || ecuation_parts[minpos][i] == '9' ){
      ecuation_parts.erase(ecuation_parts.begin() + minpos);
      return search_minpos(ecuation_parts);
    }
    else{
      return minpos;
    }
  }
  return minpos;
  }
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
      parentheses.pop_back(); //remove the last position saved in the vector
      std::cout << secondec << std::endl;
      ecuation_parts.push_back(secondec);
      secondec = ""; //clean the string
    }
  }//close for
  //Now, in the vector ecuation_parts we have the contents of the parentheses

  int minpos = search_minpos(ecuation_parts);
  std::cout << "The position of the min: " << minpos << std::endl;

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
      parentheses.pop_back(); //remove the last position saved in the vector
      std::cout << secondec << std::endl;
      ecuation_parts.push_back(secondec);
      secondec = ""; //clean the string
    }
  }//close for
  //Now, in the vector ecuation_parts we have the contents of the parentheses

  int minpos = search_minpos(ecuation_parts);
  if(minpos != -1){
    ecuation.replace(ecuation.find(ecuation_parts[minpos]), ecuation_parts[minpos].length(), second_solve(ecuation_parts[minpos])); //replace the solved ecuation to the original
    ecuation_parts[minpos] = second_solve(ecuation_parts[minpos]); //solve the min and replaces it as a string
    std::cout << "the ecuation: " << ecuation << std::endl;
    return solve_parentheses(ecuation);
  } //close if
  std::cout << "The position of the min: " << minpos << std::endl;
  std::cout << "the ecuation is: " << ecuation << std::endl;
  return solve_functions(ecuation); //UNA VEZ RESUELTOS LOS PARENTESIS RESOLVEMOS LAS ECUACIONES
}