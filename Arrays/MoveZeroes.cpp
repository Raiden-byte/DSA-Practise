#include <iostream>
using namespace std;

void moveZeroes(int arr[], int n)
{
    int j = 0;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

int main()
{
    int arr[] = {0, 1, 0, 3, 12};
    int n = 5;

    moveZeroes(arr, n);

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

/*
Notes:

1. Initialize

j = 0

2. Traverse Array

for(i = 0 to n - 1)

3. If Non-Zero Found

if(arr[i] != 0)
{
    swap(arr[i], arr[j]);
    j++;
}

Time Complexity:
O(N)

Space Complexity:
O(1)
*/
