#include <algorithm>
#include <iostream>

struct veiculo {
  std::string modelo;
  double valor;
  int ano;
};

bool ordena(const veiculo &a,const veiculo &b){
  return (a.valor > b.valor) || (a.valor==b.valor && a.ano > b.ano) || (a.valor==b.valor && a.ano==b.ano && a.modelo < b.modelo);
}

int main() {
  int n; std::cin >> n;
  veiculo carros[n];
  for(int i=0;i<n;i++){
    std::cin >> carros[i].modelo >> carros[i].valor >> carros[i].ano;
  }

  std::sort(carros,carros+n,ordena);

  std::cout << std::endl;
  for(int i=0;i<n;i++){
    std::cout << carros[i].modelo << " " << carros[i].valor << " " << carros[i].ano << std::endl;
  }

  return 0;
}
