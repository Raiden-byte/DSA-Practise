#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    for(int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

int main()
{
    int arr[] = {5, 3, 8, 2, 1};
    int n = 5;

    insertionSort(arr, n);

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

/*
Notes:

1. Outer Loop

i = 1 to n - 1

2. Store Current Element

key = arr[i]

3. Compare with Previous Elements

j = i - 1

while(j >= 0 && arr[j] > key)

4. Shift Elements Right

arr[j + 1] = arr[j]
j--

5. Insert Key

arr[j + 1] = key

Time Complexity:
Best Case: O(N)
Average Case: O(N²)
Worst Case: O(N²)

Space Complexity:
O(1)
*/
