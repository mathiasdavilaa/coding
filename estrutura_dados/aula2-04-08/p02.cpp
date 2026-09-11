#include <iostream>

using namespace std;

int main (){
    int n;

    cout << "Informe o tamanho do vetor: \n";
    cin >> n;
    string fornecedores[n];

    cout << "Digite o nome de " << n << " fornecedores\n";
    for(int i=0; i<n; i++){
        cin >> fornecedores[i];
    }

    cout << "------OUTPUT------\n";
    cout << "Os nossos fornecedores sao: \n";
    for(int i=0; i<n; i++){
        cout << i << ": " << fornecedores[i] << endl;
    }

    return 0;
}
