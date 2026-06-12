// problem: 796
// title: Police Stations

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, d;
    cin >> n >> k >> d;

    vector<vector<pair<int, int>>> graph(n + 1);

    queue<int> q;
    vector<bool> visited(n + 1, false);

    for (int i = 0; i < k; i++)
    {
        int x;
        cin >> x;

        q.push(x);
        visited[x] = true;
    }

    for (int i = 1; i <= n - 1; i++)
    {
        int u, v;
        cin >> u >> v;

        graph[u].push_back({v, i});
        graph[v].push_back({u, i});
    }

    vector<bool> used(n, false);

    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        for (auto edge : graph[u])
        {
            int v = edge.first;
            int id = edge.second;

            if (!visited[v])
            {
                visited[v] = true;
                used[id] = true;
                q.push(v);
            }
        }
    }

    vector<int> answer;

    for (int id = 1; id <= n - 1; id++)
    {
        if (!used[id])
            answer.push_back(id);
    }

    cout << answer.size() << endl;

    for (int id : answer)
        cout << id << ' ';

    cout << endl;
}