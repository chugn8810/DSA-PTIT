#include <bits/stdc++.h>
using namespace std;
int m, n, k, check = 0;
bool used[1005];
vector<int> adj[1005];
vector<pair<int, int>> MST;
void DFS(int u)
{
    used[u] = true;
    queue<int> q;
    q.push(u);
    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        for (auto it : adj[v])
        {
            if (!used[it])
            {
                used[it] = true;
                q.push(it);
                MST.push_back({v, it});
            }
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        MST.clear();
        cin >> m >> n >> k;
        memset(used, false, sizeof(used));
        for (int i = 0; i < 1005; i++)
        {
            adj[i].clear();
        }
        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        DFS(k);
        if (MST.size() == m - 1)
        {
            for (auto it : MST)
                cout << it.first << " " << it.second << endl;
        }
        else
            cout << -1 << endl;
    }
}
