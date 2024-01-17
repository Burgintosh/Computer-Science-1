#include <iostream>
using std::cout;
using std::endl;


void ZeroArray(int *arr, unsigned int length) {
    for(int i = 0; i < length; i++) {
        *arr = 0;
        arr++;
    }
}

int main() {

    const int SIZE1 = 15;
    const int SIZE2 = 4;
    int arr1[SIZE1];
    int arr2[SIZE2][SIZE2];

    int* ptr = arr1;
    cout << "\nINITIALIZING ARR1:" << endl;
    for(int i = 0; i < SIZE1; i++) {
        *ptr = 2;
        cout << "Array [" << i << "] = " << *ptr << endl;
        ptr++;
    }
    cout << "\nINITIALIZING ARR2:" << endl;
    for(int j = 0; j < SIZE2; j++) {
        ptr = arr2[j];
        for(int k = 0; k < SIZE2; k++) {
            *ptr = 5;
            cout << "Array [" << j << "," << k << "] = " << *ptr << endl;
            ptr++;
        }
    }

    ptr = arr1;
    ZeroArray(ptr, SIZE1);
    cout << "\nZEROING ARR1:" << endl;
    for(int i = 0; i < SIZE1; i++){
        cout << "Array [" << i << "] = " << *ptr << endl;
        ptr++;
    }


    for(int l = 0; l < SIZE2; l++) {
        ptr = arr2[l];
        ZeroArray(ptr, SIZE2);
    }

    cout << "\nZEROING ARR2:" << endl;
    for(int j = 0; j < SIZE2; j++) {
        ptr = arr2[j];
        for(int k = 0; k < SIZE2; k++) {
            cout << "Array [" << j << "," << k << "] = " << *ptr << endl;
            ptr++;
        }
    }
}