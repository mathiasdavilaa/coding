#include <iostream>

int main(){
  int nmr,variable=0; std::cin >> nmr;
  std::string operation;
  for(int i=0;i<nmr;i++){
  std::cin >> operation;
  if(operation == "X++" || operation == "++X"){variable++;}
  else if(operation == "--X" || operation == "X--"){variable--;}
  }


  std::cout << variable;

  return 0;
}
