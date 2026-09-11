#include <iostream>

int main(){
  int nmr,a,b,c,contador=0; std::cin >> nmr;
  for(int i=0;i<nmr;i++){
    std::cin >> a >> b >> c;
    if(a + b + c >= 2){
      contador++;
    }
  }

  std::cout << contador;
  return 0;
}
