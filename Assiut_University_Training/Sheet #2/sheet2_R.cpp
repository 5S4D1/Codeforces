// sheet #2
// problem: R
// title: Sequence of Numbers and Sum

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int max, min;
    while (cin>>max>>min && max>0 && min>0)
    {
        if (min > max)
            swap(max,min);
        int sum = 0;
        for(int i = min; i <= max; i++)
        {
            cout << i << " ";
            sum += i;
        }
        cout << "sum =" << sum << endl;
    }
    

    return 0;
}