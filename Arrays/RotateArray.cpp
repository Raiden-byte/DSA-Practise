#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotateArray(vector<int>& nums, int k)
{
    int n = nums.size();

    k = k % n;

    reverse(nums.begin(), nums.end());

    reverse(nums.begin(), nums.begin() + k);

    reverse(nums.begin() + k, nums.end());
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};

    int k = 3;

    rotateArray(nums, k);

    for(int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}

/*
Notes:

1. n = nums.size()

2. k = k % n

3. Reverse Entire Array

reverse(nums.begin(), nums.end());

4. Reverse First k Elements

reverse(nums.begin(), nums.begin() + k);

5. Reverse Remaining Elements

reverse(nums.begin() + k, nums.end());

Time Complexity:
O(N)

Space Complexity:
O(1)
*/
