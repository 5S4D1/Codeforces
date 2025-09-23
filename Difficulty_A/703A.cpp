// problem: 703A
// title: Mishka and Game

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int miska = 0, chris = 0, a, b;
    for (int i = 0; i < t; i++)
    {
        cin >> a >> b;
        if (a > b)
            miska++;
        else if (b > a)
            chris++;
    }
    
    if (miska > chris)
        cout << "Mishka" << endl;
    else if (chris > miska)
        cout << "Chris" << endl;
    else
        cout << "Friendship is magic!^^" << endl;

    return 0;
}