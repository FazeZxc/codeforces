#include<iostream>
#include<string>

int main(){
  int n;
  std::cin >> n;
  std::string str;
  std::cin >> str;
  int count = 0;
  for(int x = 0;x < str.size() ; x++){
    if(str[x] == str[x+1]){
      count++;
    }
  }
  std::cout << count;
  return 0;
}
