#include <bits/stdc++.h>
using namespace std;
vector<int> adj[1005];
int m, n, k;
int mau[1005];
bool check(int v, int tar)
{
    for (auto it : adj[v])
    {
        if (mau[it] == tar)
            return false;
    }
    return true;
}
bool Try(int u)
{
    if (u > m)
    {
        return true;
    }
    for (int i = 1; i <= k; i++)
    {
        if (check(u, i))
        {
            mau[u] = i;
            if (Try(u + 1))
                return true;
        }
    }
    return false;
}
int main()
{
    int t;
    if (!(cin >> t))
        return 0;
    while (t--)
    {
        cin >> m >> n >> k;
        for (int i = 1; i <= m; i++)
        {
            adj[i].clear();
            mau[i] = 0;
        }
        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        if (Try(1))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
