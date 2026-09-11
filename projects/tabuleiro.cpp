#include <iostream>
#include <string>

int main (){
  int tamanho_tabuleiro = 5,posicao1,posicao2;
  std::string tabuleiro[5][5] = {
    {"o", "o", "o"},
    {"o", "o", "o"},
    {"o", "o", "o"},
  };

  for(int i=0;i<tamanho_tabuleiro;i++){
    for(int j=0;j<tamanho_tabuleiro;j++){
      std::cout << tabuleiro[i][j] << " ";
    }
    std::cout << std::endl;
  }

  std::cout << "Escolha uma posicao para preencher(no formato Linha x Coluna):" << std::endl;
  std::cin >> posicao1 >> posicao2;

  for(int i=0;i<tamanho_tabuleiro;i++){
    for(int j=0;j<tamanho_tabuleiro;j++){
      if(j==posicao2){
        std::cout << tabuleiro[i][] << " ";
      }
      std::cout << tabuleiro[i][j] << " ";
    }
    std::cout << std::endl;
  }
}
