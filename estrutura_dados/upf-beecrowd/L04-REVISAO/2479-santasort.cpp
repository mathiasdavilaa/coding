#include <algorithm>
#include <iostream>

int main(){
  int n,merece=0; std::cin >> n;
  char controlador; std::string nome,lista[n];

  for(int i=0;i<n;i++){
    std::cin >> controlador;
    if(controlador == '+'){
      merece++;
    }
    std::cin >> lista[i];
  }

  std::sort(lista,lista+n);

  for(int i=0;i<n;i++){
    std::cout << lista[i] << std::endl;
  }
  std::cout << "Se comportaram: " << merece << " | Nao se comportaram: " << n - merece << std::endl;

  return 0;
}
