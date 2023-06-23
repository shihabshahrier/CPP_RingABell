#include <iostream>

int main()
{

    int i = 5;
    int j = 17;

    // for loop
    for (int k = 5; k > 0; k--)
    {
        if (k == 3)
        {
            break; // breaks the loops
        }
        std::cout << k << std::endl;
    }

    // while loop
    while (i < 10)
    {
        if (i == 7)
        {
            i++;
            continue; // skips to the next
        }
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