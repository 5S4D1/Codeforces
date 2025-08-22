// problem: 705A
// title: Hulk

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string it = "it",
           that = "that ",
           hate = "I hate ",
           love = "I love ";

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
            cout << hate;
        
        else
            cout << love;
        

        if (i < n)
        {
            cout << that;
        }
    }

    cout << it << endl;

    return 0;
}