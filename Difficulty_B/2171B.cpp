// problem: 2171B
// title: Yuu Koito and Minimum Absolute Sum

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        // for (int i = 0; i < n; i++)
        // {
        //     if (a[i] == -1)
        //     {
        //         a[i] = 0;
        //     }
        // }

        // if(n==2){
        //     if (a[0]>a[1]){
        //         a[1]=a[0];
        //     }
        //     else{
        //         a[0]=a[1];
        //     }
        // }

        int nega = 0, sum = 0;

        for (int i =0;i<n;i++)
        {
            if (a[i] == -1){
                nega++;
            }
            else{
                sum += a[i];
            }
        }

        int fill_value = 0;
        if (nega > 0){
            fill_value = sum / nega;
        }

        cout <<sum<<' '<< fill_value << endl;

        // int abs_sum = 0;

        // for (int i = 0; i < n - 1; i++)
        // {
        //     abs_sum += abs(a[i + 1] - a[i]);
        // }

        // cout << abs_sum << endl;

        // for (int i = 0; i < n; i++)
        // {
        //     cout << a[i] << (i + 1 == n ? '\n' : ' ');
        // }
    }

    return 0;
}