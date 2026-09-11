// Exemplo de operador ternário
#include <iostream>
using namespace std;
int main(){
    double a,b;
    cout << "Informe dois valores: ";
    cin >> a >> b;
            //condição ? valor se TRUE : Valor se FALSE 
    double maior = (a > b ? a : b);
    cout << "Maior: " << maior << endl;

    /*
    if(a>b){
        cout << "O MAIOR VALOR É: " << a;
    }else{
        cout << "O MAIOR VALOR É: " << b;
    }
    */
    return 0;
}