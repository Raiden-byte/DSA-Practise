#include <iostream>
#include <vector>
using namespace std;

int firstOccurrence(vector<int>& arr, int target)
{
    int low = 0;
    int high = arr.size() - 1;
    int ans = -1;

    while(low <= high)
    {
        int mid = low + (high - low) / 2;

        if(arr[mid] == target)
        {
            ans = mid;
            high = mid - 1;
        }
        else if(arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return ans;
}

int lastOccurrence(vector<int>& arr, int target)
{
    int low = 0;
    int high = arr.size() - 1;
    int ans = -1;

    while(low <= high)
    {
        int mid = low + (high - low) / 2;

        if(arr[mid] == target)
        {
            ans = mid;
            low = mid + 1;
        }
        else if(arr[mid] < target)
        {
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
    vector<int> arr = {1, 2, 2, 2, 3, 4, 5};
    int target = 2;

    int first = firstOccurrence(arr, target);
    int last = lastOccurrence(arr, target);

    cout << "First Occurrence: " << first << endl;
    cout << "Last Occurrence: " << last << endl;

    return 0;
}

/*
Notes:

First Occurrence:
Found target -> Save answer -> Go Left

Last Occurrence:
Found target -> Save answer -> Go Right

Follow-up:
Count Occurrences

Formula:
count = last - first + 1

Edge Case:
if(first == -1)
    return 0;

Time Complexity:
O(log N)
*/
