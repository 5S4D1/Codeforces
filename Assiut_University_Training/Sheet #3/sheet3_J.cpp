// sheet #3
// problem: J
// title: Lucky Array

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, min = INT_MAX, temp, count = 0;
    cin >> n;
    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        array[i] = temp;
        if (temp < min)
            min = temp;
    }

    for (int i = 0; i < n; i++)
    {
        if (array[i] == min)
            count++;
    }

    if (count % 2 != 0)
        cout << "Lucky" << endl;
    else
        cout << "Unlucky" << endl;

    return 0;
}