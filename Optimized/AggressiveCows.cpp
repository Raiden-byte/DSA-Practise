#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool canPlaceCows(vector<int>& stalls, int k, int midDistance)
{
    int cows = 1;
    int lastPosition = stalls[0];

    for(int i = 1; i < stalls.size(); i++)
    {
        if(stalls[i] - lastPosition >= midDistance)
        {
            cows++;
            lastPosition = stalls[i];
        }
    }

    return cows >= k;
}

int aggressiveCows(vector<int>& stalls, int k)
{
    sort(stalls.begin(), stalls.end());

    int low = 1;
    int high = stalls[stalls.size() - 1] - stalls[0];
    int ans = -1;

    while(low <= high)
    {
        int mid = low + (high - low) / 2;

        if(canPlaceCows(stalls, k, mid))
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return ans;
}

int main()
{
    vector<int> stalls = {1, 2, 4, 8, 9};
    int k = 3;

    cout << aggressiveCows(stalls, k);

    return 0;
}
