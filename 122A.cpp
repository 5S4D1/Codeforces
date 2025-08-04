// problem: 122A
// title: Lucky Division

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> luckyNumbers;
    queue<int> q;
    q.push(4);
    q.push(7);
    while (!q.empty())
    {
        int num = q.front();
        q.pop();
        if (num > n)
            continue;
        luckyNumbers.push_back(num);
        q.push(num * 10 + 4);
        q.push(num * 10 + 7);
    }

    bool isLucky = false;
    for (int lucky : luckyNumbers)
    {
        if (n % lucky == 0)
        {
            isLucky = true;
            break;
        }
    }

    if (isLucky)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}