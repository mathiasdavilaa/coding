//define os valores no momento da declaracao do vetor
#include <iostream>
#include <iomanip>

using namespace std;

int main (){
    float vet[]{9.030, 3.120, 4.011, 2.333, 0.333};

    float soma = 0;

    for(int i=0; i<5; i++){
        soma = soma + vet[i];
    }

    cout << "valor da soma: " << fixed << setprecision(2) << soma << endl;

    return 0;
}
