// sheet #1
// problem: H
// title: Two numbers

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    float result = (float)a/b;

    cout << "floor "<< a << " / "<< b<< " = " << floor(result) << endl;
    cout << "ceil "<< a << " / "<< b<< " = " << ceil(result) << endl;
    cout << "round "<< a << " / "<< b<< " = " << round(result) << endl;

    return 0;
}