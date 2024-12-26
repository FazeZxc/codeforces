#include <iostream>

int main (){
    int a , b;
    int years = 0;
    std::cin >> a >> b;

    while(a <= b){
        years++;
        a *= 3;
        b *= 2;
    }
    std::cout << years;
    return 0;
}