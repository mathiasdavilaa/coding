#include <iostream>
#include <iomanip>
#include <algorithm>

void avalia_tempo(double times[],int tamanho){
    int excelentes=0,bons=0,precisa_melhorar=0;
    for(int i=0;i<tamanho;i++){
        if(times[i]<11.00){
            excelentes++;
        }else if(times[i]>=11.00 && times[i]<12.00){
            bons++;
        }else {
            precisa_melhorar++;
        }
    }
    std::cout << "Excelente: " << excelentes << " atletas" << std::endl;
    std::cout << "Bom: " << bons << " atletas" << std::endl;
    std::cout << "Precisa melhorar: " << precisa_melhorar << " atletas" << std::endl;
}

void tabela_tempo(double times[],int tamanho){
    double melhor=times[0],pior=0,soma_tempos=0,tempo_medio=0;
    for(int i=0;i<tamanho;i++){
        if(times[i]<=melhor){
            melhor = times[i];
        }else if(times[i]>=pior){
            pior = times[i];
        }
        soma_tempos = soma_tempos + times[i];
    }
    tempo_medio = soma_tempos / tamanho;

    std::cout << "Melhor tempo: " << std::fixed << std::setprecision(2) << melhor << "s" << std::endl;
    std::cout << "Pior tempo: " << std::fixed << std::setprecision(2) << pior << "s" << std::endl;
    std::cout << "Tempo medio: " << std::fixed << std::setprecision(2) << tempo_medio << "s" << std::endl;
}

bool ordena(float a, float b){
    return a > b;
}

int main() {
    int qtd_tempos;
    std::cin >> qtd_tempos;
    double tempos[qtd_tempos];

    for(int i=0;i<qtd_tempos;i++){
        std::cin >> tempos[i];
    }

    avalia_tempo(tempos,qtd_tempos);
    std::cout << std::endl;
    tabela_tempo(tempos,qtd_tempos);
    std::cout << std::endl;

    std::sort(tempos,tempos+qtd_tempos,ordena);
    std::cout << "Tempos em ordem decrescente: ";
    for(int i=0;i<qtd_tempos;i++){
        std::cout << " |" << tempos[i] << "| ";
    }
    //for(int i=0;i<qtd_tempos;i++){
    //    std::cout << " |" << std::fixed << std::setprecision(2) << tempos[i] << "| ";
    //} //ficou essa parte aqui, pq nao fala se o output dos tempos ordenados precisa ser formatado para 2 numeros depois do ponto :)
    return 0;
}
