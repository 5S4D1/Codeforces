// contest #2
// problem: F
// title: Break Number

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long numbers, store, maximum = 0;

    for (int i = 0; i < n; i++)
    {
        store = 0;
        cin >> numbers;
        while (numbers % 2 == 0)
        {
            numbers /= 2;
            store++;
        }
        if (store > maximum)
            maximum = store;
    }
    cout << maximum << endl;

    return 0;
}