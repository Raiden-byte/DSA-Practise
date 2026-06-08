#include <iostream>
using namespace std;

long long floorSqrt(long long n)
{
    long long low = 0;
    long long high = n;
    long long ans = -1;

    while(low <= high)
    {
        long long mid = low + (high - low) / 2;

        long long square = 1LL * mid * mid;

        if(square == n)
        {
            return mid;
        }
        else if(square < n)
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
    long long n = 20;

    cout << "Square Root: " << floorSqrt(n);

    return 0;
}

/*
Notes:

1. Search Space

low = 0
high = n

2. Binary Search

square == n
-> return mid

square < n
-> ans = mid
-> low = mid + 1

square > n
-> high = mid - 1

3. Return ans

Important:

long long square = 1LL * mid * mid

Reason:
Avoid integer overflow.

Time Complexity: O(log N)
Space Complexity: O(1)
*/
