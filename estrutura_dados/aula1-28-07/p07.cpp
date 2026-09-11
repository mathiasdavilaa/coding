#include <iostream>

using namespace std;

int main(){
    int n = 0;
    cout << "Laço 'while' \n";
    /*
    Realiza o teste antes de entra no looping
    -- Pode acontece de nunca executar
    */
    while (n <= 10){
        cout << n << endl;
        n++; // n = n + 1; - Incremento
    } 

    cout << "Do While: " << endl;
    /*
    Realiza o teste depois da primeira executação
     - Garante que pelo menos uma vez será executado
    */
    n=0;
    // n = 11; - teste com esse
    do{
        cout << n << endl;
        n++;
    }while(n<10); 


    n = 0;
    cout << "Laço infinito\n";
    /*
    Laço infinito: executa infinitamente até que 
    a condição do if seja verdadeira e caia no break;
    */
    while (true){
        if(n == 5){
            break;
        }
        cout << n << endl;
        n++;
    }
    n = 0;
    cout << "Laço for: " << endl;
    /*
    Três partes separadas por ';'
    -1ª Inicialização da variavel contadora (controle);
    -2º Teste enquanto: Permance no laço enquanto esse teste for verdadeiro
    -3º Atualização da variavel de controle: incremento 
    */
    for(int i=0; i<=20; i++){
        cout << i << endl;
    }


    return 0;
}