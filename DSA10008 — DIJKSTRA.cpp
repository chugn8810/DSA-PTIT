#include <bits/stdc++.h>
using namespace std;
int m, n, k;
vector<pair<int, int>> adj[1005];
void DIJKSTRA()
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
    vector<int> d(m + 1, 1e9);
    d[k] = 0;
    q.push({0, k});
    while (!q.empty())
    {
        pair<int, int> tmp = q.top();
        q.pop();
        int u = tmp.second;
        int kc = tmp.first;
        if (kc > d[u])
            continue;
        for (auto it : adj[u])
        {
            int v = it.first, w = it.second;
            if (d[u] + w < d[v])
            {
                d[v] = d[u] + w;
                q.push({d[v], v});
            }
        }
    }
    for (int i = 1; i < m + 1; i++)
        cout << d[i] << " ";
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        for (int i = 0; i < 1005; i++)
        {
            adj[i].clear();
        }
        cin >> m >> n >> k;
        for (int i = 0; i < n; i++)
        {
            int x, y, z;
            cin >> x >> y >> z;
            adj[x].push_back({y, z});
            adj[y].push_back({x, z});
        }
        DIJKSTRA();
    }
}
