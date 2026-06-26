#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<int> findDuplicates(vector<int>& nums)
{
    vector<int> ans;

    for (int i = 0; i < nums.size(); i++)
    {
        int index = abs(nums[i]) - 1;

        if (nums[index] < 0)
        {
            ans.push_back(index + 1);
        }
        else
        {
            nums[index] = -nums[index];
        }
    }

    return ans;
}

int main()
{
    vector<int> nums = {4, 3, 2, 7, 8, 2, 3, 1};

    vector<int> ans = findDuplicates(nums);

    cout << "Duplicates are: ";

    for (int num : ans)
    {
        cout << num << " ";
    }

    return 0;
}
