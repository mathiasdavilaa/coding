#include <iostream>

int main(){
  int rows[9] = {0,1,2,3,4,5,6,7,8};

  for(int i=0;i<9;i+3){
    std::cout << rows[i];
  }

  return 0;
}
