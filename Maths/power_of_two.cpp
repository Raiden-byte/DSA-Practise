#include <iostream>
#include <climits>
using namespace std;

bool isPowerOfTwo(int n)
{
    int ans = 1;

    for(int i = 0; i <= 30; i++)
    {
        if(ans == n)
        {
            return true;
        }

        if(ans < INT_MAX / 2)
        {
            ans = ans * 2;
        }
    }

    return false;
}

int main()
{
    int n = 16;

    if(isPowerOfTwo(n))
    {
        cout << n << " is a power of 2";
    }
    else
    {
        cout << n << " is not a power of 2";
    }

    return 0;
}
