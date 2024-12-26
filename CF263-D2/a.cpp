#include<iostream>
#include<vector>

int main(){
    std::vector<std::vector <int>> vec;
    std::vector<int> tempVec;
    int counter = 0;
    int temp;
    for( int i = 0 ; i < 5 ; i++) {
        for(int j = 0; j < 5 ; j++){
            std::cin >> temp;
            tempVec.push_back(temp);
        }
        vec.push_back(tempVec);
        tempVec.clear();
    }
    for(int i = 0; i<5 ; i++){
        for(int j = 0 ; j < 5; j++){
            if(vec[i][j] == 1){
                while(i != 2){
                    if(i < 2){
                        i++;
                        counter++;
                    }else{
                        i--;
                        counter++;
                    }
                }
                while(j != 2){
                    if(j < 2){
                        j++;
                        counter++;
                    }else{
                        j--;
                        counter++;
                    }
                }
            }
        }
    }
    std::cout<< counter;
    return 0;
}