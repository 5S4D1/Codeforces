// problem: 580C
// title: Kefa and Park

#include <bits/stdc++.h>
using namespace std;

int n, m;       // n = #vertices    m = maximum #consecutive cats
int restaurants = 0;

void dfs(int u, int parent, int consecutiveCats, vector<vector<int>> &tree, vector<int> &cat)
{
    // has a cat?
    if (cat[u] == 1)
        consecutiveCats++;
    else
        consecutiveCats = 0;
    // much cats!
    if (consecutiveCats > m)
        return;
    
    // is a leaf?
    if (tree[u].size() == 1 && u != 1)
    {
        restaurants++;
        return;
    }
    // visit nodes
    for (int v : tree[u])
    {
        if (v == parent)
            continue;
        dfs(v, u, consecutiveCats, tree, cat);
    }
}

int main()
{
    cin >> n >> m;
    vector<int> cat(n+1);
    vector<vector<int>> tree(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> cat[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }

    dfs(1, 0, 0, tree, cat);
    cout << restaurants << endl;

    return 0;
}