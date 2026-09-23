#include <iostream>

int main(){
  int n=15,cont;
  int par[5],impar[5],pos_par=0,pos_impar=0;

  for(int i=0;i<n;i++){
    std::cin >> cont;
    if(cont % 2 == 0){
      par[pos_par]=cont;
      pos_par++;
      if(pos_par<5){
      }else{
        for(int p=0;p<5;p++){
          std::cout << "par[" << p << "] = " << par[p] << std::endl;
        }
        pos_par=0;
      }
    }else{
      impar[pos_impar]=cont;
      pos_impar++;
      if(pos_impar<5){
      }else{
        for(int p=0;p<5;p++){
          std::cout << "impar[" << p << "] = " << impar[p] << std::endl;
        }
        pos_impar=0;
      }
    }
  }

  for(int i=0;i<pos_impar;i++){
    std::cout << "impar[" << i << "] = " << impar[i] << std::endl;
  }
  for(int p=0;p<pos_par;p++){
    std::cout << "par[" << p << "] = " << par[p] << std::endl;
  }


  return 0;
}
