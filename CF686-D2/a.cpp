#include<iostream>

int main (){
  int n;
  std::cin >> n;
  long long d;
  long long y;
  int distressKids = 0;
  std::cin >> d;
  while(n--){
    char tmp;
    std::cin >> tmp;
    std::cin >> y;
    if(tmp == '+'){
      d += y;
    }else{
      if( y <= d){
        d -= y;
      }else{
        distressKids++;
      }
    }
  }
  std::cout<< d << " " << distressKids;
  return 0;
}
