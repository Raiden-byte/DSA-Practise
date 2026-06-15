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

void reverseWord(char name[], int start, int end)
{
    while(start < end)
    {
        swap(name[start], name[end]);
        start++;
        end--;
    }
}

void reverseWords(char name[])
{
    int length = getLength(name);

    int start = 0;

    for(int i = 0; i < length; i++)
    {
        if(name[i] == ' ')
        {
            reverseWord(name, start, i - 1);

            start = i + 1;
        }
    }

    reverseWord(name, start, length - 1);
}

int main()
{
    char name[100];

    cin.getline(name, 100);

    reverseWords(name);

    cout << name;

    return 0;
}
