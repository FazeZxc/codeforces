#include <iostream>
#include <vector>

int main()
{
    int n, a;
    int temp;
    int catchCount = 0;
    std::cin >> n >> a;
    a--;
    std::vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        std::cin >> temp;
        vec.push_back(temp);
    }
    for (int i = 0; i < n; i++)
    {
        if (a - i >= 0 && a + i <= n)
        {
            if (vec[a - i] == 1 && vec[a + i] == 1)
            {
                catchCount += 1;
            }
        }
        else if (a - i < 0)
        {
            if (vec[a + i] == 1)
            {
                catchCount++;
            }
        }
        else if (a + i > n)
        {
            if (vec[a - i] == 1)
            {
                catchCount++;
            }
        }
    }
    std::cout << catchCount;
    return 0;
}