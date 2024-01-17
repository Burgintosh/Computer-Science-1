#include <iostream>


int main() {
    std::cout << "\nThis is the loop output: \n";
    int i = 10;
    while(i > 0) {
        std::cout << i << std::endl;
        i--;
    }

    std::cout << "\nThis is the goto output: \n";
    int j = 10;
    label1:
    std::cout << j << std::endl;
    if(j > 1) {
        j--;
        goto label1;
    }

}
