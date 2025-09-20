// sheet #3
// problem: G
// title: Palindrome Array

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int array[n];
    bool isPalindrome = true;

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    for (int i = 0; i < n / 2; i++)
    {
        if (array[i] != array[n - 1 - i])
        {
            isPalindrome = false;
            break;
        }
    }

    isPalindrome ? cout << "YES" << endl : cout << "NO" << endl;

    return 0;
}