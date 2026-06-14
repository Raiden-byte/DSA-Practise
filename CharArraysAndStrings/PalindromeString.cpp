#include <iostream>
using namespace std;

int getLength(char name[])
{
    int i = 0;

    while(name[i] != '\0')
    {
        i++;
    }

    return i;
}

bool checkPalindrome(char name[])
{
    int length = getLength(name);

    int start = 0;
    int end = length - 1;

    while(start < end)
    {
        if(name[start] != name[end])
        {
            return false;
        }

        start++;
        end--;
    }

    return true;
}

int main()
{
    char name[20];

    cout << "Enter String: ";
    cin >> name;

    if(checkPalindrome(name))
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not Palindrome";
    }

    return 0;
}
