#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
// This is big dumb
// Works but makes me sad.
void CharCounter(string text) {
    int strCount[256] = { 0 };
    
    for(int lettervar = 0; lettervar < 256; lettervar++) {
        for(int i = 0; i < text.size(); i++) { 
            if(char(lettervar) == text[i])
                strCount[lettervar] = strCount[lettervar] + 1;
        }
    }

    for(size_t j = 0; j < 256; j++) {
        if(strCount[j] == 0)
            continue;
        else
            cout << char(j) << " " << strCount[j] << endl;
    }
}

int main() {
    string user_input;
    cin >> user_input;
    CharCounter(user_input);
}