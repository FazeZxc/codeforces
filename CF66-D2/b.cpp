#include <iostream>
#include <vector>

int main()
{
    int n;
    std::cin >> n;
    int maxCount = 1;
    int temp = 1;
    std::vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        std::cin >> temp;
        vec.push_back(temp);
    }
    temp = 1;
    if (vec.size() == 1)
    {
        std::cout << maxCount;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            // for left
            for (int j = i; j > 0; j--)
            {
                if (vec[j - 1] <= vec[j])
                {
                    temp++;
                }
                else
                {
                    break;
                }
            }
            // for right
            for (int j = i ; j < n-1 ; j++)
            {
                if (vec[j] >= vec[j + 1])
                {
                    temp++;
                }
                else
                {
                    break;
                }
            }
            if(temp > maxCount){
                maxCount = temp;
            }
                temp = 1;
        }
        std::cout << maxCount;
    }
    return 0;
}