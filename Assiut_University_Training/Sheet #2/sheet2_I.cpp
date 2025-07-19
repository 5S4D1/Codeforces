// sheet #2
// problem: I
// title: Palindrome

#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(const string &s)
{
    int n = s.length();
    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] != s[n - 1 - i])
            return false;
    }
    return true;
}

int main()
{
    string str;
    cin >> str;

    if (isPalindrome(str))
    {
        cout << str << endl;
        cout << "YES" << endl;
    }
    else
    {
        string reversed = "";
        int n = str.length();
        // Reverse the string
        for (int i = n - 1; i >= 0; i--)
        {
            reversed += str[i];
        }

        // Remove leading zeros from the reversed string
        int start = 0;
        int reversedLen = reversed.length();

        // Find the first non-zero character
        while (start < reversedLen && reversed[start] == '0')
        {
            start++;
        }

        // If all characters are zeros, print "0"
        if (start == reversedLen)
        {
            cout << "0" << endl;
        }
        else
        {
            for (int i = start; i < reversedLen; i++)
                cout << reversed[i];

            cout << endl;
        }

        cout << "NO" << endl;
    }

    return 0;
}