// problem: 443A
// title: Anton and Letters

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string input;
    getline(cin, input);

    set<char> letters;

    for (char c : input)
    {
        if (c >= 'a' && c <= 'z')
        {
            letters.insert(c);
        }
    }

    cout << letters.size() << endl;

    return 0;
}