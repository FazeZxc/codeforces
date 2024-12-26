#include<iostream>
#include<vector>

int main(){
  int n;
  std::cin>> n;
  std::vector<std::pair<int , int >> vec;
  int tmp1,tmp2;
  int answer = 0;
  for(int i = 0 ; i < n; i++){
    std::cin>> tmp1 >> tmp2;
    vec.push_back({tmp1 , tmp2});
  }
  for(int i = 0 ; i < n ; i++){
    for(int j = 0 ; j < n ; j++){
      if(vec[i].first == vec[j].second){
        answer++;
      }
    }
  }
  std::cout<<answer;
  return 0;
}
