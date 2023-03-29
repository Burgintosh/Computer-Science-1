#include <iostream>
using std::cin;
using std::cout;
using std::string;
using std::endl;

template <typename T, unsigned int n>
class stack {
private:
    T arr[100];
    int length = 0;
public:
    bool push(stack a, T new_val) {
    if(length+1 > 100 || length < 0) {
        return false;
    }
    else {
        arr[length] = new_val;
        length++;
        return true;
    }
}
    bool pop(stack a, T& val) {
    if(length > 100 || length < 1) {
        return false;
    }
    else {
        val = arr[length-1];
        arr[length-1] = 0;
        length = length - 1;
        return true;
    }
}
    double peek(stack a, T& val) {
    if(length < 1) {
        return false;
    }
    else {
        val = arr[length-1];
        return true;
    }
}
    bool is_empty(stack a) {
    if(length < 1) {
        return true;
    }
    else {
        return false;
    }
}
    int member() {
    return length;
    }
};