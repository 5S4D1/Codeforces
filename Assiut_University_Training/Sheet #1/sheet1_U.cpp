// sheet #1
// problem: U
// title: Float or int

#include <bits/stdc++.h>
using namespace std;

int main()
{
    float n;
    cin >> n;
    int a = (int)n;

    if (n == a)
    {
        cout << "int " << a << endl;
    }
    else
    {
        float b = n - a;
        cout << "float " << a << " ";
        printf("%.3f\n",b);
    }
    return 0;
}