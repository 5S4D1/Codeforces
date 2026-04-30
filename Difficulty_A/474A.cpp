// problem: 474A
// title: Keyboard

#include <bits/stdc++.h>
using namespace std;

int main()
{
    char store[] = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p',
                    'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', ';',
                    'z', 'x', 'c', 'v', 'b', 'n', 'm', ',', '.', '/'};
                    
    int size = sizeof(store) / sizeof(store[0]);
    char shifting;
    cin >> shifting;

    string data;
    cin >> data;
    // For right shifting
    if (shifting == 'R')
    {
        for (auto x : data)
        {
            for (int i = 0; i < size; i++)
            {
                if (x == store[i])
                    cout << store[i - 1];
            }
        }
    }
    // For left shifting
    if (shifting == 'L')
    {
        for (auto x : data)
        {
            for (int i = 0; i < size; i++)
            {
                if (x == store[i])
                    cout << store[i + 1];
            }
        }
    }

    cout << endl;

    return 0;
}