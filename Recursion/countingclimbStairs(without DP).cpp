#include <iostream>
using namespace std;

int climbStairs(int n) {
    if (n < 0) {
        return 0;
    }

    if (n == 0) {
        return 1;
    }

    int ans = climbStairs(n - 1) + climbStairs(n - 2);

    return ans;
}

int main() {
    int n;

    cout << "Enter number of stairs: ";
    cin >> n;

    cout << "Number of ways = " << climbStairs(n) << endl;

    return 0;
}
