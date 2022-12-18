#include <iostream>

int main() 
{
    int volume;
    std::cin >> volume;
    int remainder = volume%5;
    if (remainder == 0)
        std::cout << volume;
    else
        std::cout << volume-remainder;

    return 0;
}
