#include<iostream>
#include<string>

int main(){
  std::string str1="qwertyuiopasdfghjkl;zxcvbnm,./";
  std::string x;
  std::string str2;
  std::cin >> x;
  std::cin >> str2;
  if( x == "L" ){
    for(auto& c: str2){
      for(int i = 0 ; i < str1.size() ; i++){
        if(c == str1[i]){
          c = str1[i+1];
          break;
        }
      }
    }
  }  
  else{
    for(auto& c: str2){
      for(int i = 0 ; i < str1.size() ; i++){
        if(c == str1[i]){
          c = str1[i-1];
          break;
        }
      }
    }
  }
  std::cout << str2;
  return 0;
}
