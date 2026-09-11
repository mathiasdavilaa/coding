#include <iostream>
#include "funcoes.cpp"

using namespace std;

int main(){
    int n;
    cout << "N: ";
    cin >> n;

    cout << "O fatorial da funcao em outro arquivo: " << fatorial(n) << endl;

    return 0;
}