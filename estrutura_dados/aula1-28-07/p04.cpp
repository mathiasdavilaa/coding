//Exemplo de if e else
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Informe um valor inteiro: ";
    cin >> n;
    // && é o AND
    // || OR
    // Se o n é maior que 10 e menor que 20
    //if(10 < n && n < 20){
    //if (n >10)
    if(n > 10 && n < 20){
        // '\n' e 'endl' ambos pulam a linha
        cout << "ok!\n"; 
    }else{
        cout << "Não!\n"; 

    }


    return 0;
}