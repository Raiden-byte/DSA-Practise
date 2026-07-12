#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int count = 0;

    for (int i = 0; i < n; i++) {

        if (nums[i] > nums[(i + 1) % n]) {
            count++;
        }
    }

    if (count <= 1) {
        cout << "True";
    }
    else {
        cout << "False";
    }

    return 0;
}
