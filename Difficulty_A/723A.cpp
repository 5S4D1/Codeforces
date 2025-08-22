// problem: 723A
// title: The New Year: Meeting Friends

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> coordinate(3);
    cin >> coordinate[0] >> coordinate[1] >> coordinate[2];

    sort(coordinate.begin(), coordinate.end());

    int minDistance = coordinate[1] - coordinate[0];
    minDistance += coordinate[2] - coordinate[1];

    cout << minDistance << endl;

    return 0;
}