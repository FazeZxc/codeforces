#include<iostream>
#include<set>
#include<string>

int main(){
	std::set<char> s;
	std::string str; 
	std::cin >> str;
	for(auto x : str){
		s.insert(x);
	}
	if(s.size() % 2 == 0){
		std:: cout << "CHAT WITH HER!";
	}else {
		std:: cout << "IGNORE HIM!";
	}
	return 0;
}
