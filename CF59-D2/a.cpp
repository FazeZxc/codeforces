#include<iostream>
#include<string>
#include<algorithm>

int main(){
    std::string s;
    std::cin >> s;
    int lowerCount = 0;
    int upperCount = 0;
    for(int i = 0; i < s.size(); i++){
        if(islower(s[i])){
            lowerCount++;
        }else{
            upperCount++;
        }
    }
    if(lowerCount < upperCount){
        transform(s.begin(), s.end() , s.begin(), ::toupper);
    }else if (lowerCount > upperCount){
        transform(s.begin(), s.end() , s.begin(), ::tolower);
    }else {
        transform(s.begin(), s.end() , s.begin(), ::tolower);
    }
    std::cout<<s;
    return 0;
}