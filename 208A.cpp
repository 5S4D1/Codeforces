// problem: 208A
// title: Dubstep

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string remixes;
    getline(cin, remixes);

    string result, word;
    int position = 0;

    while (position < remixes.size())
    {
        if (remixes.substr(position, 3) == "WUB")
        {
            if (!word.empty())
            {
                result += word + " ";
                word.clear();
            }
            position += 3;
        }
        else
        {
            word += remixes[position];
            position++;
        }
    }
    if (!word.empty())
    {
        result += word;
    }

    cout << result << endl;

    return 0;
}