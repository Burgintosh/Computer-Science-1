#include <iostream>
using std::cout;
using std::endl;



int main() {

    char ch_arr[5][4] = {{'a', 'b', 'c', 'd'}, {'e', 'f', 'g', 'h'}};

    char ch = 's';
    const int* ch_ptr = &ch;
    const int*& ch_ref2pt = ch_ptr;
    cout << ch << ", " << ch_ptr << ", " << *ch_ptr << ", "
     << ch_ref2pt << ", " << *ch_ref2pt << endl;
    char ch2 = 'd';
    ch_ptr = &ch2;
    cout << ch_ptr << ", " << ch_ref2pt
     << ", " << *ch_ref2pt << endl;
}