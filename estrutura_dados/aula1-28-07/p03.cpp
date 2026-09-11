#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    float a,b;
    cin >> a >> b;
    // fixed: Garantir que seja um ponto flutuante
    // setprecision: Define a precisão (casas decimais)
    cout << "O resultado é: " 
         <<  fixed << setprecision(1) << a/b << endl;

    return 0;
}