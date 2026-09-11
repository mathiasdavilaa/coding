#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    char O;
    double M[12][12];
    double soma = 0.0;
    int contador = 0;

    cin >> O;

    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            cin >> M[i][j];
        }
    }

    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            if(j > i && j > 11 - i){
                soma += M[i][j];
                contador++;
            }
        }
    }

    if(O == 'M'){
        soma /= contador;
    }

    cout << fixed << setprecision(1);
    cout << soma << endl;

    return 0;
}