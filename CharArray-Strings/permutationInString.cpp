#include <iostream>
#include <string>
using namespace std;

bool checkEqual(int a[26], int b[26]) {
    for (int i = 0; i < 26; i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

bool checkInclusion(string s1, string s2) {

    int count1[26] = {0};

    // Store frequency of s1
    for (int i = 0; i < s1.length(); i++) {
        int index = s1[i] - 'a';
        count1[index]++;
    }

    int windowSize = s1.length();
    int count2[26] = {0};

    int i = 0;

    // Create first window
    while (i < windowSize && i < s2.length()) {
        int index = s2[i] - 'a';
        count2[index]++;
        i++;
    }

    // Check first window
    if (checkEqual(count1, count2))
        return true;

    // Slide the window
    while (i < s2.length()) {

        // Add new character
        char newChar = s2[i];
        int index = newChar - 'a';
        count2[index]++;

        // Remove old character
        char oldChar = s2[i - windowSize];
        index = oldChar - 'a';
        count2[index]--;

        i++;

        if (checkEqual(count1, count2))
            return true;
    }

    return false;
}

int main() {

    string s1 = "ab";
    string s2 = "eidbaooo";

    if (checkInclusion(s1, s2))
        cout << "True";
    else
        cout << "False";

    return 0;
}
