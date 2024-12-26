#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int temp;
    int answers = 0;
    int counter = 0;
    while (n--)
    {
        for(int i = 0 ; i < 3 ; i++ ){
            std::cin >> temp;
            counter += temp;
        }
        if(counter >= 2){
            answers++;
        }
            counter = 0;
    }
    std::cout<< answers;
return 0;
}
