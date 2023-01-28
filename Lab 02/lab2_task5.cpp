#include <iostream>

int main() {

    //TASK 5
    int chess[2][3];
    chess[0][0] = 5;
    chess[0][1] = 10;
    chess[0][2] = 15;
    chess[1][0] = chess[0][0];
    chess[1][1] = (chess[0][0] + chess[0][1]);
    for(int i=0;i<3;i++) {
        chess[1][2] += chess[0][i];
    }

    for(int i=0;i<3;i++) {
        std::cout << chess[0][i] << ", ";
    }
    std::cout << std::endl;
    for(int i=0;i<3;i++) {
        std::cout << chess[1][i] << ", ";
    }
    std::cout << std::endl;
}