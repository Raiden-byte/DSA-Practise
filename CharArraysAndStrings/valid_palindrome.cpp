#include <iostream>
using namespace std;

// Check if character is alphanumeric using ASCII rules
bool isAlphaNum(char ch) {
    return (ch >= 'A' && ch <= 'Z') ||
           (ch >= 'a' && ch <= 'z') ||
           (ch >= '0' && ch <= '9');
}

// Convert uppercase to lowercase using ASCII
char toLowerCase(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        return ch + 32;
    }
    return ch;
}

// Function to check valid palindrome
bool isPalindrome(string s) {
    int start = 0;
    int end = s.size() - 1;

    while (start <= end) {

        // Skip non-alphanumeric from start
        if (!isAlphaNum(s[start])) {
            start++;
            continue;
        }

        // Skip non-alphanumeric from end
        if (!isAlphaNum(s[end])) {
            end--;
            continue;
        }

        // Compare after converting to lowercase
        if (toLowerCase(s[start]) != toLowerCase(s[end])) {
            return false;
        }

        start++;
        end--;
    }

    return true;
}

// Driver code
int main() {
    string s;
    cout << "Enter string: ";
    getline(cin, s);

    if (isPalindrome(s)) {
        cout << "Valid Palindrome" << endl;
    } else {
        cout << "Not a Palindrome" << endl;
    }

    return 0;
}
