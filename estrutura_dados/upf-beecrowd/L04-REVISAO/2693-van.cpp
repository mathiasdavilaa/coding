#include<iostream>
#include <algorithm>

struct estudante{
  std::string nome;
  char region;
  int distance;
};

bool ordena(const estudante &a,const estudante &b){
  return(a.distance < b.distance) || (a.distance==b.distance && a.region < b.region) || (a.distance==b.distance && a.region==b.region && a.nome < b.nome);
}

int main(){
  int n; std::cin>>n;
  estudante alunos[n];

  for(int i=0;i<n;i++){
    std::cin >> alunos[i].nome;
    std::cin >> alunos[i].region;
    std::cin >> alunos[i].distance;
  }

  std::sort(alunos,alunos+n,ordena);

  for(int i=0;i<n;i++){
    std::cout << alunos[i].nome << std::endl;
  }

  return 0;
}
