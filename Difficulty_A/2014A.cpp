// problem: 2014A
// title: Robin Helps

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int robin = 0;
        int help = 0;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            if (temp == 0 && robin > 0)
            {
                robin--;
                help++;
            }
            if (temp >= k)
                robin += temp;
        }

        cout << help << endl;
    }

    return 0;
}