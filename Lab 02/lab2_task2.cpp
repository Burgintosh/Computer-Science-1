#include <iostream>

int main() {

    // TASK 2
    float single = 0.2;
    // std::cout << single;
    bool comp2 = (single == 0.2);
    std::cout << single << std::endl << comp2 << std::endl;
    //3. Boolean works best to store the result in a variable, as it as 0 for false and 1 for true.
    //5. The boolean outputs false due to the float storage being unable to properly store 0.2
    bool comp3 = (single == 0.2f);
    std::cout << comp3;
    //7. The boolean is comparing the variable to the 0.2 that is stored as a float, so it outputs as true.
    //The double floating point is more precise than the single floating point, so the boolean that checks if they are exactly the same sees them as different.
}