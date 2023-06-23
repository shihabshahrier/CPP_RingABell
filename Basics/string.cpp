#include <iostream>
#include <string>

int main()
{
    std::string str = "0ABCDEFGHIZKLMNOPQRSTUVWXYZ";

    std::string hlw = "Hello", wrld = "World";

    // Concatenate
    std::string hw = hlw + wrld;
    std::cout << hw << std::endl;
    std::string hw2 = hlw.append(wrld);
    std::cout << hw2 << std::endl;

    // Lenth & Size

    std::cout << str.length() << std::endl;
    std::cout << str.size() << std::endl;

    // string Access
    std::cout << str[1] << str[26] << std::endl;

    // special char {\, ', "}
    std::cout << "I can't be just doing \'Python\' \\ \"JS\" " << std::endl;

    // getline func
    std::string st;
    getline(std::cin, st);
    std::cout << st << std::endl;

    return 0;
}