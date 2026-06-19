#include <iostream>
#include <climits>
using namespace std;

int reverseInteger(int x)
{
    int ans = 0;

    while(x != 0)
    {
        int digit = x % 10;

        // Overflow Check
        if(ans > INT_MAX/10 || ans < INT_MIN/10)
        {
            return 0;
        }

        ans = ans * 10 + digit;
        x = x / 10;
    }

    return ans;
}

int main()
{
    int x = 123;   // Example for dry run

    cout << "Original Number: " << x << endl;
    cout << "Reversed Number: " << reverseInteger(x);

    return 0;
}
