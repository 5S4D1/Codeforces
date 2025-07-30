// problem: 492A
// name: Vanya and Cubes

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, height = 0, cubesUsed = 0;
    cin >> n;

    for(int i = 1; cubesUsed < n; i++)
    {
        cubesUsed += i * (i + 1) / 2;
        
        if(cubesUsed <= n)
        {
            height = i;
        }
        else
            break;
        
    }
    cout << height << endl;

    return 0;
}