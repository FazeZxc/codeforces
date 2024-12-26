#include<iostream>
#include<string>
#include<set>

int main (int argc, char *argv[]) {
  std::string str;
  std::set<int> s;
  std::getline(std::cin, str);

  for(auto x : str){
    if(x >= 97 && x <= 122){
      s.insert(x);
    }
  }
  
  std::cout<<s.size();
  return 0;
}
