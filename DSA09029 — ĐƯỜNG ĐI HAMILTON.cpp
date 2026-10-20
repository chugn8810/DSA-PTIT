#include <bits/stdc++.h>
using namespace std;
int m, n, check = 0;
bool used[1005];
vector<int> adj[1005];
void halmiton(int buoc, int vitri)
{
    if (check == 1)
        return;
    for (auto it : adj[vitri])
    {
        if (buoc == m - 1)
        {
            check = 1;
            return;
        }
        if (!used[it])
        {
            used[it] = true;
            halmiton(buoc + 1, it);
            used[it] = false;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        check = 0;
        cin >> m >> n;
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
        for (int i = 1; i <= m; i++)
        {
            memset(used, false, sizeof(used));
            used[i] = true;
            halmiton(0, i);
            if (check == 1)
                break;
        }
        if (check == 1)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
}
