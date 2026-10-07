#include <iostream>
#include <queue>

struct pessoa{
  std::string nome,email;
};

int main(){
  std::queue<pessoa> fila;
  pessoa aux;

  while(true){
    std::cout << "digite um nome ou FIM para sair: ";
    std::getline(std::cin,aux.nome);

    if(aux.nome == "FIM"){
      std::cout << "voce resolveu sair, ate logo!\n";
      break;
    }
    std::cout << "informe o email: ";
    std::getline(std::cin,aux.email);
    fila.push(aux);

    std::cout << "T: " << fila.size() << std::endl;
  }

  while(!fila.empty()){
    std::cout << fila.front().nome << " - " << fila.front().email << std::endl;
    fila.pop();   
  }

  return 0;
}
