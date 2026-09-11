#include <iostream>

int main(){
  int nmr,tamanho=0; std::cin >> nmr;
  std::string words[nmr];
  for(int i=0;i<nmr;i++){std::cin >> words[i];}

  for(int i=0;i<nmr;i++){
    if(words[i].length()>10){
      tamanho = words[i].length()-2;
      std::cout << words[i][0] << tamanho << words[i][words[i].length()-1] << std::endl;
    }else{
      std::cout << words[i] << std::endl;
    }
  }

  return 0;
}
