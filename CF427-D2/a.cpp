#include<iostream>

int main(){
    int tt;
    std::cin>> tt;
    int event;
    int recruits = 0;
    int untreatedCrimes = 0;
    while(tt--){
      std::cin>>event;
      if(event == -1){
        if(recruits == 0){
          untreatedCrimes++;
        }
        else{
          recruits--;
        }
      }
      else{
        recruits+=event;
      }
    }
    std::cout<<untreatedCrimes;
    return 0;
}
