#include <iostream>
#include <algorithm>

bool ordena(float a, float b){
    return a < b;
}

int main() {
    const int n=5;
    float vet[n]={9.5,1.7,1.6,3.0,6.3};

    std::sort(vet,vet+n,ordena);

    for(int i=0;i<n;i++){
        std::cout << " |" << vet[i] << "| ";
    }

    return 0;
}
