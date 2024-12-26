#include<iostream>
#include<string>
#include<cctype>

int main(){
    std::string s1;
    std::string s2;
    std::cin >> s1;
    std::cin >> s2;
    int flag = 0;
    for(auto& c : s1){
        c = std::tolower(c);
    }
    for(auto& c : s2){
        c = std::tolower(c);
    }
    for(int i = 0; i < s1.size() ; i++){
        if(s1[i] - s2[i] > 0){
            flag = 1;
            break;
        }else if(s1[i] - s2[i] < 0){
            flag = -1;
            break;
        }
    }
    std::cout << flag;
    return 0;
}