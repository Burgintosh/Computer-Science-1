//Burgess Doan

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int board_state[8][8];

bool Queen(unsigned int n) {
    Label:
    if(n = 1) {
        for(int i = 0; i < 8; i++) {
            for(int j = 0; j < 8; j++) {
                if(board_state[i][j] != 1) {
                    board_state[i][j] = 2;
                    return true;
                }
                return false;
            }
        }
    }
    else if(n > 1) {
        for(int i = 0; i < 8; i++) {
            for(int j = 0; j < 8; j++) {
                if(board_state[i][j] = 0) {
                    for(int k = 0; k < 8; i++) {
                        board_state[k][j] = 1;
                        board_state[i][k] = 1;
                        if(i+k == 0 && j+k == 0)
                            board_state[i+k][j+k] = 1;
                        if(i-k == 0 && j-k == 0)
                            board_state[i-k][j-k] = 1;
                    }
                    board_state[i][j] = 2;
                    n--;
                    goto Label;
                }
            }
        }
    }
    return false;
}


int main() {

    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            board_state[i][j] = 0;
        }
    }
        
    //Add this for a false result.
    /*for(int j = 0; j < 8; j++) {
        board_state[5][j] = 1;
        board_state[j][5] = 1;
        for(int k = 0; k < 8; k++) {
            if(5+k == 0 && 5+k == 0) {
                board_state[5+k][5+k] = 1;
            }
            if(5-k == 0 && 5-k == 0) {
                board_state[5-k][5-k] = 1;
            }
        }
    }
    board_state[5][5] = 2;*/
    cout << Queen(8);
}