//primeiro exemplo de sort

#include <iostream>
#include <algorithm> // necessaria para utilizar o sort

int main() {
    int numeros[10]={42,15,17,95,06,10,21,16,10,98};

    std::cout << "Vetor original: " << std::endl << "| ";
    for(int i=0;i<10;i++){
        std::cout << numeros[i] << " | ";
    }
    std::cout << std::endl << std::endl;

    // ordenar usando a funcao sort
    std::sort(numeros,numeros+10);

    std::cout << "Vetor ordenado: " << std::endl << "| ";
    for(int i=0;i<10;i++){
        std::cout << numeros[i] << " | ";
    }

    return 0;
}
