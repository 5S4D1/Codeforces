// problem: 58A
// name: Chat Room

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string text, s = "hello";
    int comp = 0;
    cin >> text;
    int len = text.length();
    for (int i = 0; i < len; i++)
    {
        if (text[i] == s[comp])
            comp++;
    }
    if (comp == 5)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}