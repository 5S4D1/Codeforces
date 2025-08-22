// problem: 520A
// title: Pangram

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    //  set automatically keeps only one copy of each value
    set<char> unique_chars;

    for (char c : s)
    {
        if (isalpha(c))
        {
            unique_chars.insert(tolower(c));
        }
    }

    if (unique_chars.size() == 26)
        cout << "YES" << endl;
    
    else
        cout << "NO" << endl;


    return 0;
}