#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {

    int row = matrix.size();
    int col = matrix[0].size();

    int start = 0;
    int end = row * col - 1;

    while(start <= end) {

        int mid = start + (end - start) / 2;

        int element = matrix[mid / col][mid % col];

        if(element == target) {
            return true;
        }

        if(element < target) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    return false;
}

int main() {

    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };

    int target;
    cout << "Enter target: ";
    cin >> target;

    if(searchMatrix(matrix, target)) {
        cout << "Target found";
    }
    else {
        cout << "Target not found";
    }

    return 0;
}
