#include <iostream>
using std::cin;
using std::cout;


void sort(int arr[], unsigned int length) {
    int key;
    int j;
    for(int i = 0; i < length; i++) {
        key = arr[i];
        j = i - 1;
        while(j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j = j - 1;
        }
        arr[j+1] = key;
    }

    for(int i = 0; i<length;i++) {
        cout << arr[i] << ", ";
    }
}

int main() {

    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    sort(a, 10);
}