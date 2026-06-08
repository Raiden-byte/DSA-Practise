#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int countStudents(vector<int>& arr, int pages)
{
    int students = 1;
    int currentPages = 0;

    for(int i = 0; i < arr.size(); i++)
    {
        if(currentPages + arr[i] <= pages)
        {
            currentPages += arr[i];
        }
        else
        {
            students++;
            currentPages = arr[i];
        }
    }

    return students;
}

int findPages(vector<int>& arr, int m)
{
    if(m > arr.size())
    {
        return -1;
    }

    int low = *max_element(arr.begin(), arr.end());
    int high = accumulate(arr.begin(), arr.end(), 0);

    int ans = -1;

    while(low <= high)
    {
        int mid = low + (high - low) / 2;

        if(countStudents(arr, mid) <= m)
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
    vector<int> arr = {25, 46, 28, 49, 24};
    int m = 4;

    cout << findPages(arr, m);

    return 0;
}
