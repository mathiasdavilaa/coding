/*
Boa pratica: uso de contantes para definir o tamanho
e para manipular o vetor
*/

#include <iostream>

using namespace std;

int main (){

    const int N = 5; // boa pratica: deixar contantes em caixa alta

    int vet[N];
    cout << "Informe " << N << " valores: \n";
    for(int i=0; i<N; i++){
        cin >> vet[i];
    }

    cout << "------OUTPUT------\n";
    cout << "Valores: \n";
    for(int i=0; i<N; i++){
        cout << vet[i] << endl;
    }

    return 0;
}
