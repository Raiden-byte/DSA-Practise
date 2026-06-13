#include <iostream>
#include <vector>
using namespace std;

bool check(vector<int>& nums)
{
    int n = nums.size();
    int count = 0;

    for(int i = 0; i < n; i++)
    {
        if(nums[i] > nums[(i + 1) % n])
        {
            count++;
        }
    }

    return count <= 1;
}

int main()
{
    vector<int> nums = {3, 4, 5, 1, 2};

    if(check(nums))
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }

    return 0;
}

/*
Notes:

1. count = 0

2. Traverse Array

for(i = 0 to n - 1)

3. Count Drops

if(nums[i] > nums[(i + 1) % n])
{
    count++;
}

4. Valid Condition

count <= 1

Time Complexity:
O(N)

Space Complexity:
O(1)
*/
