#include <iostream>
#include <queue> //container std::queue

int main(){
  std::queue<int> fila;
  std::queue<int> fila2;

  for(int i=0;i<6;i++){
    fila.push((i+1) * 100);
  }

  std::cout << "Tamanho da fila: " << fila.size() << std::endl;
  std::cout << "FRONT: " << fila.front() << std::endl << "BACK: " << fila.back() << std::endl;

  while(!fila.empty()){
    std::cout << fila.front() << std::endl;
    fila2.push(fila.front());
    fila.pop();
  }


  return 0;
}
