// contest #1
// problem: C
// title: Next Alphabet

#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s;
    cin >> s;
    if(s=='z')
        cout<<'a'<<endl;
    else
        cout << (char)(s + 1) << endl;

    return 0;
}