#include <iostream>
#include <set>
using std::cout;
using std::endl;
using std::set;

int main() {
    set<int> myset = {13, -12, 12, -11, 10, 13};
    int counter = 0;
    for (set<int>::iterator itr = myset.begin(); itr != myset.end(); itr++) {
        counter +=1;
        cout << *itr << endl;  
    }
    cout << counter << endl;
    cout << myset.size();

    myset.insert(115);

    
}