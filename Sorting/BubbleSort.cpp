#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        bool swapped = false;

        for(int j = 0; j < n - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if(swapped == false)
        {
            break;
        }
    }
}

int main()
{
    int arr[] = {5, 3, 8, 2, 1};
    int n = 5;

    bubbleSort(arr, n);

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

/*
Notes:

1. Outer Loop

n - 1 passes

2. Inner Loop

n - i - 1

Reason:
After each pass, one element reaches its correct position.

3. Swap Condition

arr[j] > arr[j+1]

4. Optimization

bool swapped = false

Swap happened?
-> swapped = true

No swap in a pass?
-> break

Time Complexity:
Best Case: O(N)
Average Case: O(N²)
Worst Case: O(N²)

Space Complexity:
O(1)
*/
