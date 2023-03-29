#include <iostream>
#include "stack.h"
using std::cin;
using std::cout;
using std::string;
using std::endl;

bool stack::push(stack a, float new_val) {
    if(length+1 > 100 || length < 0) {
        return false;
    }
    else {
        arr[length] = new_val;
        length++;
        return true;
    }
}
bool stack::pop(stack a, float& val) {
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
double stack::peek(stack a, float& val) {
    if(length < 1) {
        return false;
    }
    else {
        val = arr[length-1];
        return true;
    }
}
bool stack::is_empty(stack a) {
    if(length < 1) {
        return true;
    }
    else {
        return false;
    }
}
int stack::member() {
    return length;
}