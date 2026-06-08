/*
Problem: Sqrt(x)
Approach: Binary Search on answer
Time: O(log n)
Space: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int mySqrt(int x) {
    long long low = 0, high = x, ans = 0;

    while (low <= high) {
        long long mid = low + (high - low) / 2;

        if (mid * mid <= x) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return ans;
}

int main() {
    int x = 8;
    cout << mySqrt(x);
}
