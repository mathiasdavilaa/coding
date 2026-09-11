#include <iostream>

int main(){
  int x,y,pieces; std::cin >> x >> y;
  if (1<=x&&x<=16 && 1<=y&&y<=16){
    int board = x * y;
    if(board % 2 == 1){
      board--;
      pieces = board / 2;
    }else {
      pieces = board / 2;
    }
  }

  std::cout << pieces;

  return 0;
}
