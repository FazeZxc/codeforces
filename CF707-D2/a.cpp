#include<iostream>
 
int main(){
	int n , m;
	std::cin >> n >> m;
	char tmp;
	for(int i = 0; i < n*m ; i++){
		std::cin >> tmp;
		if(tmp == 'C' || tmp == 'M' || tmp == 'Y'){
			std::cout << "#Color";
			return 0;
		}
	}
	std::cout << "#Black&White";
	