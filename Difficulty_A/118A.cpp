// problem: 118A
// title: String Task

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string result = "";

    for (char c : s)
    {
        c = tolower(c);
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'y')
        {
            result += '.';
            result += c;
        }
    }
    cout << result << endl;

    return 0;
}