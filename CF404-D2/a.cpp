#include <iostream>
#include <set>
#include <vector>
#include <string>

int main(){
	int n ;
	std::cin >> n;
	std::set<char> st1;
	std::set<char> st2;
	std::vector<std::string> vec;
	std::string tmp;
	for(int i = 0 ; i < n ; i++){
		std::cin >> tmp;
		vec.push_back(tmp);
	}
	bool flag = 1;
	if(vec[0][0] == vec[0][1]){
		flag = 0;
	}
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < n ; j++){
			if(i == j){
				st1.insert(vec[i][j]);
			}else if ( i == n - j - 1){
				st1.insert(vec[i][j]);
			}else {
				st2.insert(vec[i][j]);
			}
		}
	}

	if(st1.size() == 1 && st2.size() == 1 && flag){
		std::cout << "YES";
	}else{
		std::cout << "NO";
	}

	return 0;
}