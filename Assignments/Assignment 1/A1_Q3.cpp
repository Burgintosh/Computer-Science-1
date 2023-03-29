#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;
int main() {
    int arr2D[4][5] = {{-12, 4, 12, 3, 1}, {7, 25, 0, 25, 1}, {127, -15, 12, 13, 2}, {1,2,3,4,5}};
    int arr1D[4] = {1,1,1,1};
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 5; j++) {
            arr1D[i] = arr1D[i] * arr2D[i][j];
        }
    }
    for(int i = 0; i < 4; i++) {
        cout << arr1D[i] << ", ";
    }
    
}