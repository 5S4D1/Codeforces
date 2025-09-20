// problem: 279B
// title: Books

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t, ReadedBooks = 0, tempReadedBooks = 0, tempTime = 0, j = 0;
    cin >> n >> t;
    vector<int> readingTime(n);

    for (int i = 0; i < n; i++)
        cin >> readingTime[i];

    for (int i = 0; i < n; i++)
    {
        while (j < n && tempTime + readingTime[j] <= t)
        {
            tempTime += readingTime[j];
            tempReadedBooks++;
            j++;
        }
        ReadedBooks = max(ReadedBooks, tempReadedBooks);
        tempTime -= readingTime[i];
        tempReadedBooks--;
    }

    cout << ReadedBooks << endl;

    return 0;
}