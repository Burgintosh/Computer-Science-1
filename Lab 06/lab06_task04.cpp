#include <iostream>
using std::cin;
using std::cout;

void SortedCheck(int arr[], unsigned int length, int elem) {
    int loc = -1;
    int check = length/2;
    while(true){

        if(arr[check] > elem) {
            check = check/2;

        }
        else if(arr[check] < elem) {
            check = check + (check/2);
        }
        else if(arr[check] == elem) {
            cout << check;
            break;
        }
    }

    /*for(int i = 0; i < length; i++) {
        if(arr[i] == elem) {
            loc = i;
            check = true;
            break;
        }
        
    }

    cout << loc;*/
}

int main() {

    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    SortedCheck(a, 10, 5);
}