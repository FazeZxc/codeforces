#include<iostream>
#include<cmath>
#include<vector>

std::vector<long long> vec;

int main(){
	long long n;
	std::cin >> n;
	if( n== 0){
		std::cout << 1;
		return 0;
	}


	if( n % 4 == 0){
		std::cout << 6;
	}else if(n % 4 == 1){
		std::cout << 8;
	}else if(n % 4 == 2){
		std::cout << 4;
	}else if(n % 4 == 3){
		std::cout << 2;
	}
	return 0;
}