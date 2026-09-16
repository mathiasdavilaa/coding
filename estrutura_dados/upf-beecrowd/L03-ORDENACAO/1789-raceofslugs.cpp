#include <algorithm>
#include <iostream>

int main(){
  int n;
  while(std::cin>>n){
    int slugs[n];
    for(int i=0;i<n;i++){
      std::cin >> slugs[i];
    }

    std::sort(slugs,slugs+n);

    if(slugs[n-1]<10){
      std::cout << "1" << std::endl;
    }else if(10<=slugs[n-1] && slugs[n-1]<20){
      std::cout << "2" << std::endl;
    }else{
      std::cout << "3" << std::endl;
    }
  }
  return 0;
}
