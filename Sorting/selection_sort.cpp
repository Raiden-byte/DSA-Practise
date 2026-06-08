/*
Selection Sort
Time Complexity: O(n^2)
Space Complexity: O(1)
Idea:
Find the minimum element in the unsorted part
and swap it with the first unsorted element.
*/

#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int>& arr) {
    int n = arr.size();

    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        swap(arr[i], arr[minIndex]);
    }
}

int main() {
    vector<int> arr = {5, 3, 4, 1, 2};

    selectionSort(arr);

    for (int x : arr) {
        cout << x << " ";
    }

    return 0;
}
