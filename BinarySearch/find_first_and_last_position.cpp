#include <iostream>
#include <vector>
using namespace std;

int firstOccurrence(vector<int>& nums, int target) {
    int start = 0, end = nums.size() - 1;
    int ans = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (nums[mid] == target) {
            ans = mid;
            end = mid - 1;
        }
        else if (nums[mid] < target) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    return ans;
}

int lastOccurrence(vector<int>& nums, int target) {
    int start = 0, end = nums.size() - 1;
    int ans = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (nums[mid] == target) {
            ans = mid;
            start = mid + 1;
        }
        else if (nums[mid] < target) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    return ans;
}

int main() {
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 8;

    int first = firstOccurrence(nums, target);
    int last = lastOccurrence(nums, target);

    cout << "First Occurrence: " << first << endl;
    cout << "Last Occurrence: " << last << endl;

    return 0;
}
