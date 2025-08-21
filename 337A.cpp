// problem: 337A
// title: Puzzles

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int students, puzzles;
    cin >> students >> puzzles;

    vector<int> puzzleSize;
    for (int i = 0; i < puzzles; i++)
    {
        int size;
        cin >> size;
        puzzleSize.emplace_back(size);
    }

    sort(puzzleSize.begin(), puzzleSize.end());

    int minDiff = INT_MAX;
    for (int i = 0; i <= puzzles - students; i++)
    {
        int diff = puzzleSize[i + students - 1] - puzzleSize[i];
        minDiff = min(minDiff, diff);
    }
    cout << minDiff << endl;

    return 0;
}