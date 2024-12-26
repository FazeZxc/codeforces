#include<iostream>
#include<vector>

int main () {
    int n, h; 
    int minWidth = 0;
    std::cin >> n >> h;
    std::vector<int> arr;
    int temp;
    for(int i = 0 ; i < n ; i++ ){
        std::cin >> temp;
        arr.push_back(temp);
    }
    for(int item : arr){
        if(item <= h ){
            minWidth++;
        }
        else {
            minWidth += 2;
        }
    }
    std::cout << minWidth;
    return 0;
}