// problem: 427A
// title: Police Recruits

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, police = 0, crime = 0;
    cin >> n;

    while (n--)
    {
        int x;
        cin >> x;
        if (x > 0)
            police += x;
        else
        {
            if (police > 0)
                police--;
            else
                crime++;
        }
    }
    
    cout << crime << endl;

    return 0;
}