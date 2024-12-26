#include<iostream>
#include<algorithm>

int gcd(int a , int b){
  while(b != 0){
    int temp = b;
    b = a%b;
    a = temp;
  }
  return a;
}

int main(){
  int pY;
  int pW;
  
  std::cin >> pY >> pW;

  int maxRoll = std::max(pY,pW);
  
  int successful_outcomes = 6 - maxRoll + 1;
  int totalOutcomes = 6;

  int divisor = gcd(successful_outcomes , totalOutcomes);
  int numerator = successful_outcomes / divisor;
  int denominator = totalOutcomes / divisor;

  std::cout<< numerator <<"/" << denominator;
  return 0;
}
