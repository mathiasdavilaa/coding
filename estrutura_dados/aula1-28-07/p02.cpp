
#include <iostream>
using namespace std;
int main(){  
    string nome;
    cout << "Qual é o seu nome? " ;
    //cin >> nome; Lê somente até o espaço em branco
    getline(cin,nome);  //Lê toda a linha
    cout << "Meu nome é: "<< nome << endl;    

    return 0;
}