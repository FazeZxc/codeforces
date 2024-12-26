#include<iostream>
#include<vector>

int main(){
    std::vector<int> vec;
    int temp;
    int rowMoves = 0;
    int columnMoves = 0;
    int onePos = 0;
    bool flag = 1;
    for(int i = 0; i < 24 ; i++ ){
        std::cin >> temp;
        vec.push_back(temp);
        if(temp != 1 && flag){
            onePos++;
        }else if(temp == 1){
            flag = 0;
        }
    }
    while(onePos!=12){
        // for left row
        if(onePos < 10){
            onePos += 5;
            rowMoves++;
        }
        // for right row
        else if(onePos > 14){
            onePos -= 5;
            rowMoves++;
        }else{
            if(onePos > 12){
                onePos--;
                columnMoves++;
            }else{
                onePos++;
                columnMoves++;
            }
        }
    }
    std::cout << rowMoves+columnMoves;
    return 0;
}