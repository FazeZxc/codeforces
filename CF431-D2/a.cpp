#include<iostream>
#include<string>
#include<vector>

int main(){
  std::vector<int> vect;
  for(int i = 0 ; i < 4 ; i++){
    int t;
    std::cin >> t;
    vect.push_back(t);
  }
  std::string str;
  int calories = 0;
  std::cin >> str;
  for(int x = 0 ; x < str.size() ; x++){
    calories += vect[str[x]-49];
  }
  std::cout << calories ;
  return 0;
}
