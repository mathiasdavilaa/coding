#include <algorithm>
#include <iostream>

struct medal{
  std::string pais;
  int ouro,prata,bronze;
};

bool ordena(const medal &a,const medal &b){
  return (a.ouro > b.ouro) || (a.ouro==b.ouro && a.prata > b.prata) || (a.ouro==b.ouro && a.prata==b.prata && a.bronze > b.bronze) || (a.ouro==b.ouro && a.prata==b.prata && a.bronze==b.bronze && a.pais < b.pais);
}

int main(){
  int n; std::cin >> n;
  medal medalhas[n];
  for(int i=0;i<n;i++){
    std::cin >> medalhas[i].pais >> medalhas[i].ouro >> medalhas[i].prata >> medalhas[i].bronze;
  }

  std::sort(medalhas,medalhas+n,ordena);

  for(int i=0;i<n;i++){
    std::cout << medalhas[i].pais << " " << medalhas[i].ouro << " " << medalhas[i].prata << " " << medalhas[i].bronze << std::endl;
  }

  return 0;
}
