#include <iostream>

int main (){
  int watermelon; std::cin >> watermelon;
  if(watermelon % 2 == 0 && watermelon > 2){
    std::cout << "YES";
  }else{
    std::cout << "NO";
  }

  return 0;
}
