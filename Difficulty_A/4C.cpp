// problem: 4C
// title: Registration system

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    unordered_map<string, int> user;

    while (n--)
    {
        string name;
        cin >> name;

        if (user.find(name) == user.end())
        {
            user[name] = 0;
            cout << "OK" << endl;
        }
        else
        {
            user[name]++;
            cout << name << user[name] << endl;
        }
    }

    return 0;
}