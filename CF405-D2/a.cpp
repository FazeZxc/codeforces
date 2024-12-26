#include<iostream>
#include<vector>
#include<algorithm>
int main (){
    int n;
    int tmp;
    std::cin >> n;
    std::vector<int> vec;
    for(int i = 0 ; i < n ; i++){
        std::cin >> tmp;
        vec.push_back(tmp);
    }
    sort(vec.begin(), vec.end());
    for(int i = 0 ; i < n ; i++){
        std::cout << vec[i] << " ";
    }    
    return 0;
}