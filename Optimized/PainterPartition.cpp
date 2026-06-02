#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int countPainters(vector<int>& arr, int maxWork)
{
    int painters = 1;
    int currentWork = 0;

    for(int i = 0; i < arr.size(); i++)
    {
        if(currentWork + arr[i] <= maxWork)
        {
            currentWork += arr[i];
        }
        else
        {
            painters++;
            currentWork = arr[i];
        }
    }

    return painters;
}

int painterPartition(vector<int>& arr, int m)
{
    int low = *max_element(arr.begin(), arr.end());
    int high = accumulate(arr.begin(), arr.end(), 0);

    int ans = -1;

    while(low <= high)
    {
        int mid = low + (high - low) / 2;

        if(countPainters(arr, mid) <= m)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return ans;
}

int main()
{
    vector<int> boards = {10, 20, 30, 40};
    int painters = 2;

    cout << painterPartition(boards, painters);

    return 0;
}
