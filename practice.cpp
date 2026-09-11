#include <iostream>

int soma(int nmr[],int size){
  int total = 0;
  for(int i=0;i<size;i++){
    total += nmr[i];
  }
  return total;
}

int maior_numero(int nmr[],int size){
  int maior = nmr[0];
  for(int i=0;i<size;i++){
    if(nmr[i]>=maior){
      maior = nmr[i];
    }
  }
  return maior;
}

int menor_numero(int nmr[],int size){
  int menor = nmr[0];
  for(int i=0;i<size;i++){
    if(nmr[i]<=menor){
      menor = nmr[i];
    }
  }
  return menor;
}

int pares(int nmr[],int size){
  int contador_pares = 0;
  for(int i=0;i<size;i++){
    if(nmr[i] % 2 == 0){
      contador_pares++;
    }
  }
  return contador_pares;
}

int negativos(int nmr[],int size){
  int contador_negativos = 0;
  for(int i=0;i<size;i++){
    if(nmr[i]<0){
      contador_negativos++;
    }
  }
  return contador_negativos;
}

int inverter_array(int nmr[],int size){
  int array_invertido[size], aux;
  for(int i=0;i<size/2;i++){
    for(int j=size;j>size/2;j--){
      aux = nmr[i];
      nmr[i]=nmr[j];
      nmr[j]=aux;
    }
  }

  return array_invertido[size];
}

int main(){
  const int tamanho = 10;
  int numeros[tamanho] = {
      4, 8, 2, 9, 1,
      7, 3, 6, 5, 10
  };

  std::cout << soma(numeros, tamanho) << std::endl;
  std::cout << maior_numero(numeros, tamanho) << std::endl;
  std::cout << menor_numero(numeros, tamanho) << std::endl;
  std::cout << pares(numeros, tamanho) << std::endl;
  std::cout << negativos(numeros, tamanho) << std::endl;
  std::cout << "Array normal: ";
  for(int i=0;i<tamanho;i++){
    std::cout << numeros[i];
  }
  std::cout << std::endl;
  std::cout << std::endl;
  std::cout << "Array invertido exibindo o array ao contrario: ";
  for(int i=tamanho;i>0;i--){
    std::cout << numeros[i];
  }


  return 0;
}
