#include <iostream>
#include <vector>

int main()
{
    int n;
    std::cin >> n;
    std::vector<int> vec;
    int tmp;
    for (int i = 0; i < n; i++){
        std::cin >> (tmp);
        vec.push_back(tmp);
    }
    bool sturn = 1;
    int sumS = 0, sumD = 0;
    int i = 0, j = vec.size()-1;
    while (i <= j){
        if (sturn){
            if (vec[i] > vec[j]){
                sumS += vec[i];
                i++;
            }else{
                sumS += vec[j];
                j--;
            }
            sturn = 0;
        }else{
            if (vec[i] > vec[j]){
                sumD += vec[i];
                i++;
            }else{
                sumD += vec[j];
                j--;
            }
            sturn = 1;
        }
    }
    std::cout<<sumS<<" "<<sumD;
    return 0;
}