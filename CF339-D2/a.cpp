#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

int main(){
    std::string str;
    std::cin>> str;
    std::vector<char> vec;
    for(int i = 0 ; i < str.size() ; i++){
        if(str[i] != '+'){
            vec.push_back(str[i]);
        }
    }
    std::sort(vec.begin(),vec.end());
    for(int i = 0 ; i < vec.size() ; i++){
        if(i == vec.size()-1){
            std::cout<< vec[i] ;
        }else{            
            std::cout<< vec[i] << "+";
        }
    }
    return 0;
}