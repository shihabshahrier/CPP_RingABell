#include <iostream>
#include <string>

int main()
{
    // numbers
    int num1 = 10;                 // 4 byte
    unsigned int num11 = 6 * 10e4; // 4 byte
    long long int num12 = 10e9;    // 8byte

    float num2 = 10.20;            // 4byte
    double num22 = 10.32;          // 8byte
    long double num23 = 10.123e10; // 12 byte

    // character
    char ch1 = 'a';          // -127 to 127
    unsigned char ch2 = 127; // 0 to 255

    // Boolean
    bool bl1 = true;  // 1
    bool bl2 = false; // 0

    // string
    std::string hlw = "Hello World";

    // Console Output
    std::cout << num1 << std::endl;
    std::cout << num11 << std::endl;
    std::cout << num12 << std::endl;

    std::cout << num2 << std::endl;
    std::cout << num22 << std::endl;
    std::cout << num23 << std::endl;

    std::cout << ch1 << std::endl;
    std::cout << ch2 << std::endl;

    std::cout << bl1 << std::endl;
    std::cout << bl2 << std::endl;

    std::cout << hlw << std::endl;

    return 0;
}