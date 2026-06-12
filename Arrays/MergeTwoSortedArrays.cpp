#include <iostream>
#include <vector>
using namespace std;

vector<int> mergeSortedArrays(int arr1[], int n1,
                              int arr2[], int n2)
{
    vector<int> ans;

    int i = 0;
    int j = 0;

    while(i < n1 && j < n2)
    {
        if(arr1[i] < arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
        }
        else
        {
            ans.push_back(arr2[j]);
            j++;
        }
    }

    while(i < n1)
    {
        ans.push_back(arr1[i]);
        i++;
    }

    while(j < n2)
    {
        ans.push_back(arr2[j]);
        j++;
    }

    return ans;
}

int main()
{
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8};

    int n1 = 4;
    int n2 = 4;

    vector<int> result = mergeSortedArrays(arr1, n1, arr2, n2);

    for(int num : result)
    {
        cout << num << " ";
    }

    return 0;
}

/*
Notes:

1. Initialize

i = 0
j = 0

2. Compare Elements

while(i < n1 && j < n2)

if(arr1[i] < arr2[j])
{
    take arr1[i]
    i++
}
else
{
    take arr2[j]
    j++
}

3. Copy Remaining Elements

while(i < n1)

while(j < n2)

4. Return Answer

Time Complexity:
O(n1 + n2)

Space Complexity:
O(n1 + n2)
*/
