// problem: 228A
// name: Is your horseshoe on the other hoof?

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 4, horseshoe = 0, dif = 0;
    long long int a[15];
    
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);
    for (int i = 0; i < n; i++)
        if (a[i] != a[i + 1])
            horseshoe++;

    cout << n - horseshoe << endl;

    return 0;
}