#include<iostream>
#include<string>

int main(){
  std::string s;
  std::string t;
  std::cin>>s;
  std::cin>>t;
  int ins=0;
  int pos=0;
  for(auto x : t){
    if(s[pos] == x){
      pos++;
    }
  }
  std::cout<<pos+1;
  return 0;
}
