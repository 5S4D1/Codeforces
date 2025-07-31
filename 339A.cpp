// problem: 339A
// title: Helpful Maths

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int one, two, three;
    one = two = three = 0;

    for (char c : s)
    {
        if (c == '1')
            one++;
        else if (c == '2')
            two++;
        else if (c == '3')
            three++;
    }

    for (int i = 0; i < s.length(); i++)
    {
        if (i < one)
            cout << "1";
        else if (i < one + two)
            cout << "2";
        else if (i < one + two + three)
            cout << "3";

        if (i < one + two + three - 1)
            cout << "+";
    }
    cout << endl;

    return 0;
}