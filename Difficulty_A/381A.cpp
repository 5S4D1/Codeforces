// problem: 381A
// title: Sereja and Dima

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    deque<int> v;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int sereja = 0, dima = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            if (v.front() >= v.back())
            {
                sereja += v.front();
                v.pop_front();
            }
            else
            {
                sereja += v.back();
                v.pop_back();
            }
        }
        else
        {
            if (v.front() >= v.back())
            {
                dima += v.front();
                v.pop_front();
            }
            else
            {
                dima += v.back();
                v.pop_back();
            }
        }
    }

    cout << sereja << " " << dima << endl;

    return 0;
}