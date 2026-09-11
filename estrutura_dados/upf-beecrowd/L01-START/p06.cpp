#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int codigo, qtd;
    double preco = 0.0;

    cin >> codigo >> qtd;

    if(codigo == 1) {
        preco = 4.00;
    }else if(codigo == 2){
        preco = 4.50;
    }else if(codigo == 3){
        preco = 5.00;
    }else if(codigo == 4){
        preco = 2.00;
    }else if(codigo == 5){
        preco = 1.50;
    }

    double total = preco * qtd;

    cout << fixed << setprecision(2);
    cout << "Total: R$ " << total << endl;

    return 0;
}