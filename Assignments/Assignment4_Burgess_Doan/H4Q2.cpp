#include <iostream>
using std::cout;
using std::endl;

typedef int (*fptr)();

class doubly_linked_list {
    int list[1000];
    int length = 0;

    void print() {
        for(int i = 0; i < length; i++) {
            cout << list[i];
            if(i != length-1)   cout << ", ";
        }
    }

    void prepend(int node) {
        for(int i = length; i > 0; i++) {
            list[i] = list[i-1];
        }
        list[0] = node;
        length++;
    }

    void append(int node) {
        list[length] = node;
        length++;
    }

    void remove() {

    }

    fptr find(int elem) {
        for(int i = 0; i < length; i++) {
            bool found;
            int* ptr;
            if(list[i] = elem)
                return list[i];
                found = true;
        }
        if(found = true) {
            return ptr;
        }
    }

};

int main() {
    
}