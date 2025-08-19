// problem: 131A
// title: cAPS lOCK

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    // when all characters are uppercase, convert to lowercase
    if (all_of(s.begin(), s.end(), ::isupper))
    {
        for (char &c : s)
        {
            c = tolower(c);
            cout << c;
        }
    }
    // when first character is uppercase and rest are lowercase, convert to uppercase
    else if (islower(s[0]) && all_of(s.begin() + 1, s.end(), ::isupper))
    {
        s[0] = toupper(s[0]);
        for (int i = 1; i < s.size(); ++i)
        {
            s[i] = tolower(s[i]);
        }
        cout << s;
    }
    // otherwise, print the string as is
    else
    {
        cout << s;
    }
    cout << endl;

    return 0;
}