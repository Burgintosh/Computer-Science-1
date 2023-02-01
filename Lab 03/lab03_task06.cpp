#include <iostream>

int main () {
    float var1;
    std::cin >> var1;
    int var2 = var1;

    if(var2 % 2 == 0)
        std::cout << var2 << " is even";
    else
        std::cout << var2 << " is odd";
}