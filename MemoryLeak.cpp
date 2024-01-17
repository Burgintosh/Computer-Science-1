#include <iostream>
using namespace std;

int* get_ptr() {
    int* i = new int; *i = 10; return i;
}

int main() {
    int* ptr = get_ptr();
    cout << *ptr << endl;
    ptr = get_ptr();
    cout << *ptr <<endl;
    // Memory from the last call remains allocated
    // But we have lost its address (ie. leak)
    delete ptr; //Deallocate ptr
}