#include <iostream>
#include <iomanip>

int limite(float vel_carros[],int tamanho){
  int qtd_dentro = 0;
  for(int i=0;i<tamanho;i++){
    if(vel_carros[i] <= 80){
      qtd_dentro++;
    }
  }
  return qtd_dentro;
}

float calc_media(float speeds[],int tamanho){
  float soma=0;
  for(int i=0;i<tamanho;i++){
    soma += speeds[i];
  }
  return soma / tamanho;
}

int main(){
  int n,inf_media=0,inf_grave=0; std::cin >> n;
  float velocidades[n]; for(int i=0;i<n;i++){
    std::cin >> velocidades[i];
    if(velocidades[i] > 80 && velocidades[i] <= 100){inf_media++;}
    if(velocidades[i] > 100){inf_grave++;}
  }
  int teste_limite = limite(velocidades,n);
  float media = calc_media(velocidades,n),maior=0,menor=0;

  for(int i=0;i<n;i++){
    if(velocidades[i] >= maior){
      maior = velocidades[i];
    }
  }
  menor=maior;
  for(int i=0;i<n;i++){
    if(velocidades[i] <= menor){
      menor = velocidades[i];
    }
  }

  std::cout << "Veiculos dentro do limite: " << teste_limite << std::endl;
  std::cout << "Veiculos com infracao media: " << inf_media << std::endl;
  std::cout << "Veiculos com infracao grave: " << inf_grave << std::endl;
  std::cout << "Menor velocidade: " << std::fixed << std::setprecision(1) << menor << " km/h" << std::endl;
  std::cout << "Maior velocidade: " << std::fixed << std::setprecision(1) << maior << " km/h" << std::endl;
  std::cout << "Velocidade media: " << std::fixed << std::setprecision(1) << media << " km/h" << std::endl;

  return 0;
}