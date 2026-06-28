#include <iostream>
using namespace std;

int peakIndex(int arr[], int n) {
    int low = 0;
    int high = n - 1;

    while (low < high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] < arr[mid + 1]) {
            low = mid + 1;
        }
        else {
            high = mid;
        }
    }

    return low;   // or return high
}

int main() {
    int arr[] = {0, 2, 4, 6, 5, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int ans = peakIndex(arr, n);

    cout << "Peak index = " << ans << endl;
    cout << "Peak element = " << arr[ans] << endl;

    return 0;
}
