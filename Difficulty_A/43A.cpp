// problem: 43A
// title: Football

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    map<string, int> score;

    while (n--)
    {
        string s;
        cin >> s;
        score[s]++;
    }

    string winner;
    int mxScore = 0;
    
    for (auto &it : score)
    {
        if (it.second > mxScore)
        {
            mxScore = it.second;
            winner = it.first;
        }
    }

    cout << winner << endl;

    return 0;
}