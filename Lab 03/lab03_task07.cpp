#include <iostream>

int main () {
    int var1;
    std::cin >> var1;

    if(var1 < 255) {
        std::cout << char(var1);
    }
    else
        var1 = var1 - 255;
        if(var1 < 255) {
            std::cout << char(var1);
        }
        else
        std::cout << "value too large.";
}