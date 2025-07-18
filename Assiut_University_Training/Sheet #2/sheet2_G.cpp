// sheet #2
// problem: G
// title: Factorial

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;

        long long factorial = 1;
        for(int j = 1; j <= num; j++)
        {
            factorial *= j;
        }
        cout << factorial << endl;
    }
    

    return 0;
}