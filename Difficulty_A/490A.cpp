// problem: 490A
// title: Team Olympiad

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> programmers, mathematicians, sportsmen;

    for(int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;

        if(a == 1)
            programmers.push_back(i);
        else if(a == 2)
            mathematicians.push_back(i);
        else
            sportsmen.push_back(i);
    }

    int teams = min({programmers.size(), mathematicians.size(), sportsmen.size()});

    cout << teams << endl;

    for(int i = 0; i < teams; i++)
        cout << programmers[i] << " " << mathematicians[i] << " " << sportsmen[i] << endl;

    return 0;
}