// Burgess Doan III

#include <iostream>
using namespace std;

template <typename T>
class Array {
    unsigned int n_allocated_block;
    unsigned int n_elems;
    const T def_val;
    T junk;
    T* elems;

public:
    Array(unsigned int n, T def_val, T* const arr = nullptr) : def_val(def_val) {
        n_allocated_block = n+1;
        n_elems = n;
        elems = arr;
    }
    ~Array();
    Array(Array &old) {
        n_allocated_block = old.n_allocated_block;
        n_elems = old.n_elems;
        def_val = old.def_val;
        elems = old.elems;
    }

    const T& operator[](unsigned int i) const;
    T& operator[](unsigned int i);

    void copy(const Array<T>& arr, bool resize) {
        
    }
    void resize(unsigned int new_size) {
        if(new_size > n_elems) {
            while(new_size > n_elems) {
                n_allocated_block *= 2;
            }
        }
        else if(new_size < n_elems / 2) {
            while(new_size < (n_allocated_block / 2)) {
                n_allocated_block /= 2;
            }
        }
        n_elems = new_size;
        
        //Fill the rest of the elements with the default value previously supplied to the constructor
    }
    unsigned int size() const;
    bool operator==(const Array<T>& arr) const {
        bool check = false;
        if(n_elems == arr.n_elems) {
            for (int i = 0; i < n_elems-1; i++) {
                if(elems != arr.elems) {
                    check = true;
                }
            }
                return !check;
        }
        else {
            return false;
        }
    }
    bool operator!=(const Array<T>& arr) const {
        bool check = false;
        if(n_elems == arr.n_elems) {
            for (int i = 0; i < n_elems-1; i++) {
                if(elems != arr.elems) {
                    check = true;
                }
            }
                return check;
        }
        else {
            return true;
        }
    }
    void operator=(const Array<T>& arr) {
        n_allocated_block = arr.n_allocated_block;
        n_elems = arr.n_elems;
        def_val = arr.def_val;
        elems = elems;
    }
    Array<T> operator+(const Array<T>& arr) const {
        n_elems = arr.n_elems;
        if (n_allocated_block < n_elems) {
            n_allocated_block = n_allocated_block + arr.n_allocated_block;
        }
        elems = elems + arr.elems;
    }
    Array<T>& operator+=(const Array<T>& arr) {

    }
    void print() const {
        for (int i = 0; i < n_elems - 1; i++) {
            cout << elems+i;
            if(i < n_elems - 1) {
                cout << ", ";
            }
            else {
                cout << endl;
            }
        }
    }
};

int main() {

    Array<int> int_arr(5, -1);
    const int a = int_arr[5];
    // Error: 5 <= 5
    cout << "int_arr[5]: " << a << endl;
    // int_arr[5]: -1
    int_arr[5] = 27;
    int_arr.print();
    // -1, -1, -1, -1, -1, 27

    int_arr.resize(15);
    int_arr.print();
    // -1, -1, -1, -1. -1, 27, -1, -1, -1, -1, -1, -1, -1, -1,
    // -1

    int arr[] = {1, 2, 3, 4, 5};
    Array<int> int_arr2(5, 1, arr);
    // 1, 2, 3, 4, 5

    Array<int> int_arr3 = int_arr + int_arr2;
    // −1, −1, −1, −1, −1, 27, −1, −1, −1, −1, −1, −1, −1, −1,
    // -1, 1, 2, 3, 4, 5

    Array<int> int_arr4(5,1, arr);
    cout << (int_arr4 == int_arr2) << endl; // 1
    cout << (int_arr4 != int_arr2) << endl; // 0

    int_arr2.resize(11);
    cout << (int_arr4 == int_arr2) << endl; // 0
    cout << (int_arr4 != int_arr2) << endl; // 1

    int_arr2.print();
    // 1, 2, 3, 4, 5, 1, 1, 1, 1, 1, 1

    int_arr3.print();
    // −1, −1, −1, −1, −1, 27, −1, −1, −1, −1, −1, −1, −1, −1,
    // −1, 1, 2, 3, 4, 5

    // Copying int_arr3 to int_arr2 w false
    int_arr2.copy(int_arr3, false);
    int_arr2.print();
    //  −1, −1, −1, −1, −1, 27, −1, −1, −1, −1, −1

    for (int i = 0; i < 5; i++) {
        int_arr2[i] = 19;
    }

    // Copying int_arr2 to int_arr3 w false
    int_arr3.copy(int_arr2, false);
    int_arr3.print();
    // 19, 19, 19, 19, 19, 27, −1, −1, −1, −1, −1, −1, −1, −1,
    // −1, 1, 2, 3, 4, 5

    for (int i = 0; i < 5; i++) {
        int_arr3[i] = 23;
    }

    // Copying int_arr3 to int_arr2 w true
    int_arr2.copy(int_arr3, true);
    int_arr2.print();
    //  23, 23, 23, 23, 23, 27, −1, −1, −1, −1, −1, −1, −1, −1,
    // −1, 1, 2, 3, 4, 5

    int_arr2.resize(5);
    for (int i = 0; i < 5; i++) {
        int_arr2[i] = 27;
    }
    // Copying int_arr2 to int_arr3 w true
    int_arr3.copy(int_arr2, true);
    int_arr3.print();
    // 27, 27, 27, 27, 27

}