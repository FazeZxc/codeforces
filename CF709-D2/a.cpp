#include<iostream>
#include<vector>

int main (int argc, char *argv[]) {
  int n , b , d;
  std::cin>>n>>b>>d;
  int storage = 0;
  int counter = 0;
  std::vector<int> vect;
  int tmp;
  for(int i = 0; i < n ; i++){
    std::cin >> tmp;
    vect.push_back(tmp);
  }
  for(int i = 0 ; i < n ; i++){
    if(vect[i] <= b){
      storage += vect[i];
      if(storage > d){
        counter++;
        storage = 0;
      }
    }
  }
  std::cout<<counter;
  return 0;
}
