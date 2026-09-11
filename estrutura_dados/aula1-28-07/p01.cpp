//Exemplo de entrada e saída de dados

#include <iostream>
using namespace std;
int main(){
    int idade;
    float altura;
    string nome;

    cout << "Informe a sua idade: "; //print
    cin  >> idade;                   //input

    cout << "Informe a sua altura(m): ";
    cin >> altura;

    cout << "Qual é o seu nome? " ;
    cin >> nome;
    cout << "Meu nome é: " << nome 
         << ", eu tenho " << idade 
         << " anos e " << altura
         << "m de altura" << endl;    

    return 0;
}