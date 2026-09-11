#include <iostream>

int main(){
  int matrix[5][5],pos[2];
  for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
      std::cin >> matrix[i][j];
    }
  }

  for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
      if(matrix[i][j] == 1){
        std::cout << matrix[i][j];
      }
    }
  }

  for(int i=0;i<5;i++){
    std::cout << std::endl;
    for(int j=0;j<5;j++){
      std::cout << matrix[i][j] << " ";
    }
  }

  std::cout << pos[0];
  return 0;
}
