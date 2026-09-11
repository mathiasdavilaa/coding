// primeiro exemplo de array unidimensional
#include <iostream>

using namespace std;

int main(){

    int vet[6];
    cout << "Informe 6 valores: \n";
    for(int i=0; i<6; i++){
        cin >> vet[i];
    }

    cout << "Valores: \n";
    for(int i=0; i<6; i++){
        cout << vet[i] << ", ";
    }

    cout << endl;

    cout << "Valores em ordem reversa: \n";
    for(int i=5; i>=0; i--){
        cout << vet[i] << ", ";
    }

    cout << "Valores e indice: \n";
    for(int i=0; i<6; i++){
        cout << "Vet[" << i << "] = " << vet[i] << endl;
    }

    return 0;
}
