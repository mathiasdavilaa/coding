#include <iostream>

struct aluno {
  int matricula;
  std::string nome;
  float nota;
};

int main() {

  aluno ciclano, fulano;

  // ciclano.matricula = 909090;
  // ciclano.nome = "Joao Caetano";
  // ciclano.nota = 9.7;

  ciclano = {909090, "Joao Caetano", 9.7};

  std::cout << "Matricula: " << ciclano.matricula << std::endl;
  std::cout << "Nome: " << ciclano.nome << std::endl;
  std::cout << "Nota: " << ciclano.nota << std::endl;

  return 0;
}
