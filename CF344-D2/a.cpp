#include<iostream>
#include<vector>

int main(){
  int n ;
  std::cin>> n;
  int temp;
  std::vector<int> vec;
  int groups = 0;
  while(n--){
    std::cin>>temp;
    vec.push_back(temp);
  }
  for(int x = 0; x <  vec.size() ; x++){
    if(vec[x] != vec[x+1]){
      groups++;
    }
  }
  std::cout << groups;
  return 0;
}
