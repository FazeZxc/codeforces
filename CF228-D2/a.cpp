#include<iostream>
#include<unordered_map>

int main(){
  int tmp;
  int answer = 0;
  std::unordered_map<int , int> colors;
  for(int i = 0 ; i < 4 ; i++){
    std::cin>>tmp;
    colors[tmp]++;
  }
  for(auto it = colors.begin(); it != colors.end(); it++){
    if(it->second > 1){
      while(it->second != 1){
        answer++;
        it->second--;
      }
    }
  }
  std::cout<<answer;
  return 0;
}
