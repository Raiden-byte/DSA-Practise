#include <bits/stdc++.h>
using namespace std;

vector<int> addArrays(vector<int>& a, vector<int>& b) {
    int i = a.size() - 1;
    int j = b.size() - 1;
    int carry = 0;

    vector<int> result;

    while (i >= 0 || j >= 0 || carry != 0) {

        int x, y;

        if (i >= 0) {
            x = a[i];
        } else {
            x = 0;
        }

        if (j >= 0) {
            y = b[j];
        } else {
            y = 0;
        }

        int sum = x + y + carry;
        int digit = sum % 10;
        carry = sum / 10;

        result.push_back(digit);

        i--;
        j--;
    }

    reverse(result.begin(), result.end());

    return result;
}

int main() {
    vector<int> a = {1, 2, 3};
    vector<int> b = {9, 9};

    vector<int> ans = addArrays(a, b);

    for (int digit : ans) {
        cout << digit << " ";
    }

    return 0;
}
