// problem: 1374C
// title: Move Brackets

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        string s;
        cin >> n >> s;

        for (int i=0; i<n-1; i++)
        {
            if(s[i]=='(' && s[i+1]==')')
            {
                s.erase(i,2);
                i=-1;
            }
        }

        cout<<s.length()/2<<endl;
    }

    return 0;
}