#include <iostream>
#include <string>

struct aluno {
  int matricula;
  std::string nome;
  float nota;
};

int main() {

  aluno ciclano, fulano;

  ciclano.matricula = 909090;
  ciclano.nome = "Joao Caetano";
  ciclano.nota = 9.7;

  std::cout << "Matricula: " << ciclano.matricula << std::endl;
  std::cout << "Nome: " << ciclano.nome << std::endl;
  std::cout << "Nota: " << ciclano.nota << std::endl;

  std::cout
      << "Digite o seu nome completo, depois a matricula e por fim a nota: "
      << std::endl;

  std::getline(std::cin, fulano.nome);
  std::cin >> fulano.matricula;
  std::cin >> fulano.nota;

  std::cout << "Matricula: " << fulano.matricula << std::endl;
  std::cout << "Nome: " << fulano.nome << std::endl;
  std::cout << "Nota: " << fulano.nota << std::endl;

  return 0;
}
