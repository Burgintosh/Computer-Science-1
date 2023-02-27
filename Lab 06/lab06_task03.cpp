#include <iostream>
using std::cin;
using std::cout;

void ElemCheck(int arr[], unsigned int length, int elem) {
    int loc = -1;
    bool check = false;
    for(int i = 0; i < length; i++) {
        if(arr[i] == elem) {
            loc = i;
            check = true;
            break;
        }
        
    }

    cout << loc;
}

int main() {

    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    ElemCheck(a, 10, 30);
}