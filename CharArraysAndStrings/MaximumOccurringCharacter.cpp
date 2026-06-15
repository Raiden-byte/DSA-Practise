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

char toLowerCase(char ch)
{
    if(ch >= 'a' && ch <= 'z')
    {
        return ch;
    }

    return ch - 'A' + 'a';
}

char getMaxOccChar(char name[])
{
    int count[26] = {0};

    int length = getLength(name);

    for(int i = 0; i < length; i++)
    {
        char ch = name[i];

        ch = toLowerCase(ch);

        int index = ch - 'a';

        count[index]++;
    }

    int maxi = -1;
    int ansIndex = -1;

    for(int i = 0; i < 26; i++)
    {
        if(count[i] > maxi)
        {
            maxi = count[i];
            ansIndex = i;
        }
    }

    return 'a' + ansIndex;
}

int main()
{
    char name[100];

    cin.getline(name, 100);

    cout << getMaxOccChar(name);

    return 0;
}
