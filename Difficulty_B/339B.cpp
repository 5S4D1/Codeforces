// problem: 339B
// title: Xenia and Ringroad

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int current = 1;
    long long total_time = 0;

    for (int i = 0; i < m; i++)
    {
        int next;
        cin >> next;
        if (next >= current)
        {
            total_time += next - current;
            current = next;
        }
        else
        {
            total_time += n - current + next;
            current = next;
        }
    }

    cout << total_time << endl;

    return 0;
}