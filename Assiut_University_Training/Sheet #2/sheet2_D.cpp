// sheet #2
// problem: D
// title: Fixed Password

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int currect_password = 1999;
    int input_password;
    cin >> input_password;

    while (input_password != currect_password)
    {
        cout << "Wrong" << endl;
        cin >> input_password;
    }
    cout << "Correct" << endl;

    return 0;
}