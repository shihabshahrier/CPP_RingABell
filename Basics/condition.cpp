#include <iostream>

int main()
{
    int a = 10, b = 11, c = 12;
    if (a > b && a < c)
    {
        std::cout << "A greater" << std::endl;
    }
    else if (b > a && b > c)
    {
        std::cout << "B Greater" << std::endl;
    }
    else
    {
        std::cout << "C Greater" << std::endl;
    }

    return 0;
}