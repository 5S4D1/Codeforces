// sheet #2
// problem: L
// title: GCD

#include<iostream>
using namespace std;
int main()
{
    int x , y, i;
    cin >> x >> y;
    if(x>y)
        i = y;
    else
        i = x;
    while (i>0)
    {
        if(x%i == 0 && y%i == 0)
        {
            cout << i;
            break;
        }
        i--;
    }
    

    return 0; 
}