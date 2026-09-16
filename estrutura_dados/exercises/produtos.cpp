#include <algorithm>
#include <iostream>
#include <iomanip>

struct produtos {
  std::string nome;
  double preco;
  int qtd;
};

bool ordenaNome(const produtos &a, const produtos &b){
  return (a.nome < b.nome);
}

bool ordenaPreco(const produtos &a, const produtos &b){
  return (a.preco < b.preco);
}

bool ordenaQtd(const produtos &a, const produtos &b){
  return (a.qtd > b.qtd);
}

int main(){
  int n,opcao; std::cin >> n;
  produtos p[n];
  for(int i=0;i<n;i++){
    std::cin >> p[i].nome >> p[i].preco >> p[i].qtd;
  }

  std::cout << "Opcao de ordenacao: "; std::cin >> opcao;
  switch (opcao){
    case 1:
      std::sort(p,p+n,ordenaNome);
      for(int i=0;i<n;i++){
        std::cout << p[i].nome << " - Preco: " << std::fixed << std::setprecision(2) << p[i].preco << " - Quantidade: " << p[i].qtd << std::endl;
      }
      break;
    case 2:
      std::sort(p,p+n,ordenaPreco);
      for(int i=0;i<n;i++){
        std::cout << p[i].nome << " - Preco: " << std::fixed << std::setprecision(2) << p[i].preco << " - Quantidade: " << p[i].qtd << std::endl;
      }
      break;
    case 3:
      std::sort(p,p+n,ordenaQtd);
      for(int i=0;i<n;i++){
        std::cout << p[i].nome << " - Preco: " << std::fixed << std::setprecision(2) << p[i].preco << " - Quantidade: " << p[i].qtd << std::endl;
      }
      break;
    default:
      break;
  }

  return 0;
}
