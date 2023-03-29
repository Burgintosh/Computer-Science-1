// Pointers are variables that store the address (and usually the tpye) of an object[1]
//Pointers don't need to be initialized on declaration, unlike references. 

#include <iostream>
using std::cout;
using std::endl;

void incrementRef(int& i) {
    i++;
}

void incrementVal(int i) {
    i++;
}

void fu(int arr[3]) {}

// void fu(int& arr[3]) {} // This does not work because Array already passed by reference (Arrays are pointers)

int main() {
    int g = 10;
    int& h = g; // h is a reference to g. The reference cannot be created without a target.
    int* i; // i is a pointer that does not yet have a target.

    short* i_ptr;
    double* d_ptr;
    cout << sizeof(i_ptr) << ", " << sizeof(d_ptr) << endl; // pointers are the same size regardless of target.

    incrementRef(g);
    cout << g << endl;

    h--;
    cout << g << ", " << h << endl;

    incrementVal(h); //This doesn't pass by reference, function will still take in by value
    cout << g << ", " << h << endl;


    int a = 12;
    int* a_ptr = &a;
    //a_ptr contains the address of a
    int b = *a_ptr;
    b++;

    cout << a << ". " << a_ptr << ", " << *a_ptr << ", " << b << endl;

    *a_ptr = 11;
    cout << a << ". " << a_ptr << ", " << *a_ptr << endl;


    int c = 13, d = 17;
    int* ptr = &c;
    *(ptr) *= 2;
    ptr = &d;
    *(ptr) += 2;
    ptr = nullptr;
    cout << c << ", " << d << ", " << ptr << endl;

    //Arrays are always passed by reference even without the & operator.

    int arr[3] = {1,2,3};
    cout << *arr << endl; // Prints the first element of the array, because array is a pointer.
    cout << *(arr +1) << endl; // This gets the second element of the array using pointer syntax.
}