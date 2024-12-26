#include<iostream>
#include<string>
#include<vector>

int main (){
  int n;
  std::cin >> n;
  std::string str;
  int size;
  std::vector<std::string> vec;  
  while(n--){
    std::cin>> str;
    vec.push_back(str);
  }
  for(int i = 0 ; i < vec.size() ; i++){
    size = vec[i].size();
    if(size > 10){
      std::cout << vec[i][0] << size - 2 << vec[i][size - 1] << std::endl;
    }else{
      std::cout << vec[i] << std::endl;
    }
  }  
  return 0;
}
