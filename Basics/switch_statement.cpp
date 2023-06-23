#include <iostream>

int main()
{
    int a = 6;
    switch (a)
    {
    case 1:
        std::cout << 1 << std::endl;
    case 2:
        std::cout << 2 << std::endl;
    case 3:
        std::cout << 3 << std::endl;
    case 4:
        std::cout << 4 << std::endl;
    case 5:
        std::cout << 5 << std::endl;
    default:
        std::cout << "Noting" << std::endl;
    }

    return 0;
}