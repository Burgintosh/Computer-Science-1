#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;
int main() {
    int arr[15] = {-12, 4, 12, 3, 1, 7, 25, 0, 25, 1, 127, -15, 12, 13, 2};
    int max = arr[0]; 
    int min = arr[0];
    for(int i : arr) {
        if(i > max) {
            max = i;
        }
        else if (i < min)
        {
            min = i;
        }
        
    }
    cout << "Max : " << max << endl << "Min : " << min << endl;
}