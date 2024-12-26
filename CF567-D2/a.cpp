#include<iostream>
#include<vector>
#include<cmath>

int main(){
    int n; 
    std::cin >> n;
    std::vector<int> cities;
    int tmp ;
    for(int i = 0 ; i < n ; ++i){
        std::cin >> tmp;
        cities.push_back(tmp);
    }
    int min = 0;
    int max = 0;
    int distance = 0;
    for(int i = 0 ; i < n ; ++i){
        for(int j = 0 ; j < n ; ++j){
            if(cities[j] < 0){
                distance =  
            }
        }
    }
    return 0;
}