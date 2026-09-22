#include <iostream>

int main(){
  std::string n;std::cin >> n;
  bool reg=false;
  for(int i=1;i<n.length();i++){
    if(n[i]=='3' && n[i-1]=='1'){
      reg = true;
      break;
    }
  }

  if(reg==true){
    std::cout << n << " es de Mala Suerte" << std::endl;
  }else{
    std::cout << n << " NO es de Mala Suerte" << std::endl;
  }

  return 0;
}
