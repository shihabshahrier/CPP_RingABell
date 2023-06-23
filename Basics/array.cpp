#include <iostream>

int main()
{
    // Array declare and Assign value
    int arr[] = {1, 2, 3};
    int arr2[3];
    int arr2d[2][2] = {
        {11, 22},
        {33, 44}};

    arr2[0] = 4;
    arr2[1] = 5;
    arr2[2] = 6;

    // Array Size
    int arr_len = sizeof(arr) / sizeof(int);
    std::cout << arr_len << std::endl;

    // Iterate Array
    for (int i = 0; i < arr_len; i++)
    {
        std::cout << arr[i] << std::endl;
    }

    //
    for (int x : arr2)
    {
        std::cout << x << std::endl;
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            std::cout << arr2d[i][j] << std::endl;
        }
    }

    return 0;
}