#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    vector<int> nums = {3, 2, 1, 5, 6, 4};
    int k = 2;

    sort(nums.begin(), nums.end());

    int ans = nums[nums.size() - k];

    cout << "Kth largest element is: " << ans << endl;

    return 0;
}
