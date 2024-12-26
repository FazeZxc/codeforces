#include <iostream>
#include <string>

int main()
{
    int n;
    int aCount = 0, dCount = 0;
    std::cin >> n;
    std::string s;
    std::cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'A')
        {
            aCount++;
        }
        else
        {
            dCount++;
        }
    }
    if (aCount > dCount)
    {
        std::cout << "Anton";
    }
    else if (aCount < dCount)
    {
        std::cout << "Danik";
    }
    else
    {
        std::cout << "Friendship";
    }

    return 0;
}