#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
int main() {
    string normal;
    cout << "Enter the string to be reverse cased" << endl;
    getline(cin,normal);
    //cin >> normal;
    

    for(int i = 0; i < normal.length(); i++) {
        if(normal[i]>=97&& normal[i]<=122) {
            normal[i] -= 32;
        }
        else if(normal[i] >= 65 && normal[i] <= 90) {
            normal[i] += 32;
        }
    }
    cout << "\nNew String : " << endl << normal;
}