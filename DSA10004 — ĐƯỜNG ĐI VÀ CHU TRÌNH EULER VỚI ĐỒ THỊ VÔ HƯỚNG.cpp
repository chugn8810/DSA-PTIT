#include <bits/stdc++.h>
using namespace std;
vector<int> adj[1005], deg(1005, 0);
bool used[1005];
int n, m;
void DFS(int u)
{
    used[u] = true;
    for (auto it : adj[u])
    {
        if (!used[it])
        {
            DFS(it);
        }
    }
}
bool checklienthong()
{
    memset(used, false, sizeof(used));
    int start = -1;
    for (int i = 1; i <= n; i++)
    {
        if (deg[i] > 0)
        {
            start = i;
            break;
        }
    }
    if (start == -1)
    {
        return false;
    }
    DFS(start);
    for (int i = 1; i <= n; i++)
    {
        if (deg[i] > 0 && used[i] == false)
        {
            return false;
        }
    }
    return true;
}
int euler()
{
    if (!checklienthong())
    {
        return 0;
    }
    int sole = 0;
    for (int i = 1; i <= n; i++)
    {
        if (deg[i] % 2 != 0)
            sole++;
    }
    if (sole == 0)
        return 2;
    if (sole == 2)
        return 1;
    return 0;
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
            deg[i] = 0;
        }
        cin >> n >> m;
        for (int i = 0; i < m; i++)
        {
            int x, y;
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
            deg[x]++;
            deg[y]++;
        }
        int check = euler();
        cout << check << endl;
    }
}
