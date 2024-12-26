#include <iostream>

int main(){
  int n, m, a;
  std::cin >> n >> m >> a;
  unsigned long long x = 0;
  unsigned long long y = 0;

  x = n / a;
  if(n % a != 0){
    x++;
  }

  y =m / a;
  if(m % a != 0){
    y++;
  }
  
  std::cout << x*y;
  return 0;
}
