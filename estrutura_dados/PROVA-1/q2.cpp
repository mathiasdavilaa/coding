#include <iostream>
#include <algorithm>
#include <iomanip>

struct hackathon{
  std::string nome;
  double nt;
  double np;
  double nf=0.0;
  int proj;
};

bool organizacao(const hackathon &a, const hackathon &b){
  return (a.nf > b.nf) || (a.nf==b.nf && a.np > b.np) || (a.nf==b.nf && a.np==b.np && a.proj > b.proj) || (a.nf==b.nf && a.np==b.np && a.proj==b.proj && a.nome < b.nome);
}

int main(){
  int n; std::cin >> n;
  hackathon candidatos[n];
  for(int i=0;i<n;i++){
    std::cin >> candidatos[i].nome >> candidatos[i].nt >> candidatos[i].np >> candidatos[i].proj;
    candidatos[i].nf = (candidatos[i].nt + candidatos[i].np) / 2;
  }

  std::sort(candidatos,candidatos+n,organizacao);

  for(int i=0;i<n;i++){
    std::cout << candidatos[i].nome << " " << std::fixed << std::setprecision(1) << candidatos[i].nf << std::endl;
  }
  return 0;
}
