#include <iostream>

int main()
{
    int a = 10, b = 20;

    // arithmatic Operators
    std::cout << "A + B : " << a + b << std::endl;
    std::cout << "A - B : " << a - b << std::endl;
    std::cout << "A * B : " << a * b << std::endl;
    std::cout << "B / A : " << b / a << std::endl;
    std::cout << "B '%' A :" << b / a << std::endl; // reminder
    std::cout << "A + 1 : " << a++ << std::endl;    // increment
    std::cout << "A + 1 : " << a-- << std::endl;    // decrement

    // Assignment Operators
    a += b; // a = a + b => var [operator sign] = var

    // comparison operators
    std::cout << (a == b) << std::endl; // equal to
    std::cout << (a >= b) << std::endl; // greater than or equal
    std::cout << (a <= b) << std::endl; // less than or equal
    std::cout << (a != b) << std::endl; // Not equal
    std::cout << (a > b) << std::endl;  // greater than
    std::cout << (a < b) << std::endl;  // less than

    // Bitwise Operators
    std::cout << "A & B : " << (a & b) << std::endl; // And
    std::cout << "A | B : " << (a | b) << std::endl; // OR
    std::cout << "A^B : " << (a ^ b) << std::endl;   // XOR
    std::cout << "Leftshift 1 : " << (a << 1) << std::endl;
    std::cout << "RightShift 1 : " << (a >> 1) << std::endl;

    return 0;
}