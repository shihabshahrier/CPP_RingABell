#include <iostream>

int main()
{

    int i = 5;
    int j = 17;

    // for loop
    for (int k = 5; k > 0; k--)
    {
        std::cout << k << std::endl;
    }

    // while loop
    while (i < 10)
    {
        std::cout << i << std::endl;
        i++;
    }

    // Do while Loop
    do
    {
        std::cout << j << std::endl;
        j++;
    } while (j < 15);

    return 0;
}