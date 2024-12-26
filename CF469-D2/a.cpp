#include<iostream>
#include<map>
std::map<int , int> mp;
int main(){
  int n ;
  std::cin >> n;
  int p , q ;
  std::cin >> p;
  int tmp;
  for(int i = 0 ; i < p ; i++){
    std::cin >> tmp;
    mp[tmp]++;
  }
  std::cin >> q;
  for(int i = 0 ; i < q ; i++){
    std::cin >> tmp;
    mp[tmp]++;
  }

  for(int i = 1 ; i <= n ; i++){
    if(mp[i] == 0){
      std::cout << "Oh, my keyboard!";
      return 0;
    }
  }
  std::cout << "I become the guy.";
  return 0;
}
