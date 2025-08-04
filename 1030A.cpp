// problem: 1030A
// title: In Search of an Easy Problem

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool easy = true;

    for(int i = 0; i < n; i++)
    {
        int difficulty;
        cin >> difficulty;

        if (difficulty == 1)
        {
            cout << "HARD" << endl;
            easy = false;
            break;
        }
    }
    if (easy)
        cout << "EASY" << endl;
    
    return 0;
}