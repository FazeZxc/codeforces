include<iostream>

int main (){
  int tt;
  int n;
  std::cin >> tt;
  while(tt--){
    std::cin >> n;
    int i = 0;
    int j = 0;
    while(n--){
      if(i % n != j % n){
        std::cout<< n;
      }
    }
  }
  return 0;
}
