#include <iostream>
#include <thread>
#include <chrono>
#include <stdlib.h>

using std::cout;
using std::endl;

int main() {

    const int grid_size = 10;
    bool grid[grid_size][grid_size];

    for(int row = 0; row < grid_size; row++) {
        for(int col = 0; col < grid_size; col++) {
            grid[row][col] = false;
        }
    }

    grid[3][3] = grid[3][4] = grid[3][5] = grid[4][6] = grid[3][6] = grid[5][6] = grid[7][7] = grid[6][7] = true;
    //grid[4][3] = grid[4][4] = grid[4][5] = true;

    while(true) {

        system("cls");

        for(int row = 0; row < grid_size; row++) {
            for(int col = 0; col < grid_size; col++) {
                if(grid[row][col]) cout << "#";
                else cout << " ";
            }
            cout << endl;
        }

        bool new_grid[grid_size][grid_size];
        
        for(int row = 0; row < grid_size; row++) {
            for(int col = 0; col < grid_size; col++) {

                int n_neighbors = 0;
                for(int neighbor_row = (row - 1); neighbor_row <= row+1; neighbor_row++) {
                    for(int neighbor_col = (col-1); neighbor_col <= col+1; neighbor_col++) {
                        if((neighbor_col == col && neighbor_row == row)
                        || neighbor_col < 0 || neighbor_row < 0 || neighbor_col >= grid_size || neighbor_row >= grid_size) {
                            continue;
                        }
                        if(grid[neighbor_row][neighbor_col]) n_neighbors++;
                    }
                }
                // The cell is currently alive
                if (grid[row][col]) {
                    new_grid[row][col] = (n_neighbors == 2 || n_neighbors == 3);
                    } else { // the cell is dead
                        new_grid[row][col] = (n_neighbors == 3);
                    }
                }
            }

            bool changed = false;
            // Copy new_grid to grid
            for (int row = 0; row < grid_size; row++) {
                for (int col = 0; col < grid_size; col++) {
                    if(grid[row][col] != new_grid[row][col]) changed = true;
                    grid[row][col] = new_grid[row][col];
                }
            }
            
            if(!changed) break;

            std::this_thread::sleep_for(std::chrono::seconds(1));

        }
        return 0;
    }

//} // I don't know what I deleted for this to not like being here