#include<iostream>
#include<string>
#include<cmath>

int main(){
  std::string str;
  std::cin>> str;
  char lastChar = 'a';
  int distance =0;
  for(char x : str){
    if(abs(x - lastChar) >= 13){
      distance += 26- abs(x - lastChar);
    }else{
      distance += abs(x - lastChar);
    }
    lastChar = x;
  } 
  std::cout << distance;
  return 0;
}
