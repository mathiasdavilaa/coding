#include <iostream>

struct aluno {
  int matricula;
  std::string nome;
  float nota;
};

const int NA = 5;

int main() {
  aluno turma[NA] = {
    {909090, "Joao Caetano", 9.7},
    {808080, "Ana CLaudia", 8.5},
    {707070, "Rose", 8.5},
    {615050, "Antonella", 8.5},
    {213080, "Jose Ildo", 7.1},
  };

  for(int i=0;i<NA;i++){
    std::cout << "Matricula: " << turma[i].matricula << ", ";
    std::cout << "Nome: " << turma[i].nome << ", ";
    std::cout << "Nota: " << turma[i].nota << ".\n";
  }

  return 0;
}
