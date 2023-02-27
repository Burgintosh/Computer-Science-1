#include <iostream>
using std::cin;
using std::cout;
bool reverse = false;
void populate_array(int arr[], unsigned int length, int min_val, int max_val) {
    arr[0] = min_val;
    for(int i = 1; i<length; i++) {
        if(arr[i-1] == max_val) {
            reverse = true;
        }
        else if (arr[i-1] == min_val) {
            reverse = false;
        }
        
        if(reverse) {
            arr[i] = arr[i-1] - 1;
        }
        else {
            arr[i] = arr[i-1] + 1;
        }
    }

    for(int i = 0; i < length; i++)
        cout << arr[i] << ", ";
}
int main() {
    int a[10];
    populate_array(a, 10, -3, 0);
}