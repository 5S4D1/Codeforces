// sheet #3
// problem: E
// title: Lowest Number

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int array[n];
    int lowest = INT_MAX, temp;
    int index;

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
        temp = min(lowest, array[i]);
        if (lowest > temp)
        {
            lowest = temp;
            index = i;
        }
    }

    cout << lowest << " " << index + 1 << endl;

    return 0;
}