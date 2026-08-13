#include <iostream>
using namespace std;

int main() {

    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    int rows = 3;
    int cols = 4;

    for(int col = 0; col < cols; col++) {

        if(col % 2 == 0) {
            // Even column: top to bottom
            for(int row = 0; row < rows; row++) {
                cout << arr[row][col] << " ";
            }
        }
        else {
            // Odd column: bottom to top
            for(int row = rows - 1; row >= 0; row--) {
                cout << arr[row][col] << " ";
            }
        }
    }

    return 0;
}
