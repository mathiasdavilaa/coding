#include <iostream>
#include <algorithm>

bool anti_men(std::string nome){
  int contador=1;
  std::sort(nome.begin(),nome.end());
  for(int i=1;i<nome.length();i++){
    if(nome[i] != nome[i-1]){
      contador++;
    }
  }
  if(contador % 2 == 0){
    return true;
  }else{
    return false;
  }
}

int main(){
  std::string name; std::cin >> name;
  if(anti_men(name) == true){
    std::cout << "CHAT WITH HER!" << std::endl;
  }else{
    std::cout << "IGNORE HIM!" << std::endl;
  }

  return 0;
}
