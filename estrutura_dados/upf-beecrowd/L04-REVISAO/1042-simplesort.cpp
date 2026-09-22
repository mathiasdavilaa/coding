#include <iostream>
#include <algorithm>

int main(){
  int nums[3],sorted[3];
  for(int i=0;i<3;i++){
    std::cin >> nums[i];
    sorted[i] = nums[i];
  }

std::sort(sorted,sorted+3);

for(int i=0;i<3;i++){
  std::cout << sorted[i] << std::endl;
}
std::cout << std::endl;
for(int i=0;i<3;i++){
  std::cout << nums[i] << std::endl;
}

  return 0;
}
