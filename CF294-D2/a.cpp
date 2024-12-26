#include<iostream>
#include<vector>

int main(){
  int n ;
  int tmp;
  std::cin >> n;
  std::vector<int> wire;
  for(int i = 0 ; i < n ; i++) {
    std::cin>>tmp;
    wire.push_back(tmp);
  }
  int m;
  std::cin >> m;
  int wirePos;
  int pos;
  for(int i = 0 ; i < m ; i++){
    std::cin >> wirePos;
    std::cin >> pos;
    if(wirePos - 1 > 0){
      wire[wirePos - 2] += pos - 1;
    }
    if(wirePos < n){
      wire[wirePos ] += wire[wirePos - 1] - pos;
    }
    wire[wirePos - 1] = 0;
  }
  for(auto x : wire){
    std::cout << x << std::endl;
  }
  return 0;
}
