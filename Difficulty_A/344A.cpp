// problem: 344A
// title: Magnets

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, count = 1;
    cin >> n;
    string magnet, temp;
    for (int i = 0; i < n; i++)
    {

        cin >> magnet;

        if (i == 0)
            temp = magnet;
        
        else
        {
            if (magnet != temp)
            {
                count++;
                temp = magnet;
            }
        }
    }
    
    cout << count << endl;

    return 0;
}