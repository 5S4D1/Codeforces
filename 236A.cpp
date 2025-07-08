// problem: 236A
// name: Boy or Girl

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string name;
    cin >> name;
    int indistinct = 0;
    int len = name.length();

    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (name[i] == name[j]){
                indistinct++;
                break;
            }
        }
    }
    int new_len = len - indistinct;

    if (new_len % 2 != 0)
        cout << "IGNORE HIM!" << endl;
    else
        cout << "CHAT WITH HER!" << endl;

    return 0;
}