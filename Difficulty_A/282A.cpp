// problem: 282A
// title: Bit++

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int score = 0;
    while (n--)
    {
        string operation;
        cin >> operation;
        
        if (operation == "++X" || operation == "X++")
            score++;
        else if (operation == "--X" || operation == "X--")
            score--;
    }
    cout << score << endl;

    return 0;
}