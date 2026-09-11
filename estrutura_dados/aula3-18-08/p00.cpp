#include <iostream>

using namespace std;


// Funcao void nao possui retorno para quem chamou
void imprimir(string texto){

    cout << "o texto recebido foi: " << texto << endl;

}

int adiciona(int x, int y){
    int t = x + y; 
    return t;
}

int main() {

    int x = 10;
    int y = 2;
    int t = 500;

    int valor = adiciona(x,y);

    cout << "soma: " << valor << endl;
    cout << "valor de t na main: " << t << endl;

    return 0;
}