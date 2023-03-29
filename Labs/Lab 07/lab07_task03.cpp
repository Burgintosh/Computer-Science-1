#include <iostream>
using std::cin;
using std::cout;
using std::string;
using std::endl;

class queue {
    double arr[100];
    int length = 0;
    public:
        bool enqueue(double new_val) {
            if(length > 100 || length < 0) {
                return false;
            }
            else {
                arr[length] = new_val;
                length++;
                return true;
            }
        }
        bool dequeue() {
            if(length > 100 || length < 0) {
                return false;
            }
            else {
                for(int i = 1; i < length; i++) {
                    arr[i-1] = arr[i];
                }
                length--;
                return true;
            }
        }
        double peek() {
            if(length < 1) {
                return false;
            }
            else {
                return arr[0];
            }
        }
        bool is_empty() {
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


int main() {
    queue test;
    for(int i = 0;  i < 100; i++) {
        test.enqueue(i+1);
    }

    cout << test.member() << endl;
    cout << test.peek() << endl;
    test.dequeue();
    cout << test.peek() << endl;
}