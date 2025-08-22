// problem: 116A
// title: Tram

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, current_passengers = 0, max_passengers = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int exit, enter;
        cin >> exit >> enter;
        current_passengers += enter - exit;
        max_passengers = max(max_passengers, current_passengers);
    }
    
    cout << max_passengers << endl;

    return 0;
}
