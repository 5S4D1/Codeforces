// problem: 2171C
// title: Renako Amaori and XOR Game (easy version)

#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
            cin >> b[i];

        // Count positions where a and b differ
        int diff = 0;
        int last_diff = -1;
        for (int i = 0; i < n; i++){
            if (a[i] != b[i]){
                diff++;
                last_diff = i + 1; // 1-based index
            }
        }

        if (diff % 2 == 0)
            cout << "Tie" << endl;
        else {
            if (last_diff % 2 == 1)
                cout << "Ajisai" << endl;
            else
                cout << "Mai" << endl;
        }
    }

    return 0;
}