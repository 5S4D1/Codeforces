// problem: 677A
// title: Vanya and Fence

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, height_fence;
    cin >> n >> height_fence;
    int height_person[n], width =0;

    for (int i = 0; i < n; i++)
    {
        cin >> height_person[i];
        if (height_person[i] > height_fence)
            width += 2;
        else
            width++;
    }
    
    cout << width << endl;

    return 0;
}