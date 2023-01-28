#include <iostream>

int main() {

    //TASK 3
   short notList[3];
   notList[0] = 256;
   notList[1] = 512;
   notList[2] = (notList[0] * notList[1]);
   //std::cout << notList[0] << std::endl << notList[1] << std::endl << notList[2] << std::endl;
   for(int i=0; i<3; i++) {
    std::cout << notList[i] << std::endl;
   }
   //6. The third place is outputted as 0 because the number is too big to be stored as a short
}