#include<iostream>

int main(){
  int k , r;
  std::cin >> k >> r;
  int x = 1;
  while(true){
    if( (x * k) % 10 == 0 || (x * k) % 10 == r){
      std::cout << x;
      break;
    }
    x++;
  }
  return 0;
}
