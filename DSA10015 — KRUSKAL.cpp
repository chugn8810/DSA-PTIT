#include <bits/stdc++.h>
using namespace std;
int m, n, k;
struct canh
{
    int u, v, w;
};
vector<pair<int, int>> adj[1005];
vector<canh> a;
bool used[1005];
bool DFS(int u, int v)
{
    if (u == v)
        return true;
    used[u] = true;
    for (auto it : adj[u])
    {
        if (!used[it.first])
        {
            if (DFS(it.first, v))
                return true;
        }
    }
    return false;
}
bool sosanh(canh a, canh b)
{
    return a.w < b.w;
}
void KRUSKAL()
{
    vector<canh> MST;
    int d = 0;
    while (MST.size() < m - 1)
    {
        if (a.empty())
            break;
        canh tmp = a[0];
        a.erase(a.begin());
        memset(used, false, sizeof(used));
        if (!DFS(tmp.u, tmp.v))
        {
            adj[tmp.u].push_back({tmp.v, tmp.w});
            adj[tmp.v].push_back({tmp.u, tmp.w});
            d += tmp.w;
        }
    }
    cout << d << endl;
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
        a.clear();
        cin >> m >> n;
        for (int i = 0; i < n; i++)
        {
            int x, y, z;
            cin >> x >> y >> z;
            a.push_back({x, y, z});
        }
        sort(a.begin(), a.end(), sosanh);
        KRUSKAL();
    }
}
