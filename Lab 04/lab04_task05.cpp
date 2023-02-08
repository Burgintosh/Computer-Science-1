#include <iostream>
using namespace std;

/*struct maxtrix {
        int n_rows;
        int n_cols;
        int matrix[n_rows][n_cols];

} myMatrix1, myMatrix2;*/

int main () {
    int matrix1_row, matrix1_col, matrix2_row, matrix2_col, matrix1[10][10], matrix2[10][10], multiplied[10][10];

    cout << "Enter row and column numbers for Matrix 1" << endl;
    cin >> matrix1_row >> matrix1_col;
    cout << "Enter row and column numbers for Matrix 2" << endl;
    cin >> matrix2_row >> matrix2_col;

    while(matrix1_col!=matrix2_row) {
        cout << "Column of first matrix is not equal to the row of secon matrix. Try Again." << endl;

        cout << "Enter row and column numbers for Matrix 1" << endl;
        cin >> matrix1_row >> matrix1_col;
        cout << "Enter row and column numbers for Matrix 2" << endl;
        cin >> matrix2_row >> matrix2_col;
    }

    //matrix1[matrix1_row][matrix1_col];
    //matrix2[matrix2_row][matrix2_col];

    cout << endl <<  "Enter elements for matrix 1" << matrix1_row << endl;
    for(int i = 0; i < matrix1_row; i++) {
        for(int j = 0; j < matrix1_col; j++) {
            cout << "Enter element matrix1 " << i + 1 << j + 1 << " : ";
            cin >> matrix1[i][j];
        }
    }

    cout << endl <<  "Enter elements for matrix 2" << endl;
    for(int i = 0; i < matrix2_row; i++) {
        for(int j = 0; j < matrix2_col; j++) {
            cout << "Enter element matrix2 " << i + 1 << j + 1 << " : ";
            cin >> matrix2[i][j];
        }
    }

    for(int i = 0; i< matrix2_row; i++) {
        for (int j= 0; i < matrix1_col; j++) {
            multiplied[i][j] = 0;
        }
    }

    for(int i = 0; i < matrix1_row; i++) {
        for(int j = 0; j < matrix2_row; j++) {
            for(int k = 0; k < matrix2_col; k++) {
                multiplied[j][k] += matrix1[i][j] * matrix2[j][k];
            }
        }
    }

    cout << "output" << multiplied;
    for(int i = 0; i < matrix2_row; i++) {
        for(int j = 0; j < matrix1_col; j++) {
            cout << " " << multiplied[i][j];

        }
        cout << endl;
    }

    return 0;
}