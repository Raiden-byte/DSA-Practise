#include <iostream>
using namespace std;

long long binarySearch(int n) {
    int s = 0;
    int e = n;
    long long ans = -1;

    while (s <= e) {
        long long mid = s + (e - s) / 2;
        long long square = 1LL * mid * mid;

        if (square == n) {
            return mid;
        }
        else if (square < n) {
            ans = mid;
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
    }
    return ans;
}

int main() {
    int x;
    cout << "Enter a number: ";
    cin >> x;

    cout << "Square root = " << binarySearch(x);

    return 0;
}
