// problem: 2263A
// title: Min Max Game

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // b = Bessie   e = Elsie
    int t, b, e;
    cin >> t;
    while (t--)
    {
        int size;
        b = e = 0;
        cin >> size;
        vector<int> arr(size);
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
            if (arr[i] == 1)
                b++;
            else
                e++;
        }
        if (b >= e)
            cout << "Bessie" << endl;
        else
            cout << "Elsie" << endl;
    }

    return 0;
}