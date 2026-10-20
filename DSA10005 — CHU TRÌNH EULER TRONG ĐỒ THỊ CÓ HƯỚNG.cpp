#include <bits/stdc++.h>
using namespace std;
int m, n, check = 0;
bool used[1005];
vector<int> adj[1005];
int degra[1005], degvao[1005];
void DFS(int u)
{
    used[u] = true;
    for (auto it : adj[u])
    {
        if (!used[it])
            DFS(it);
    }
}
bool euler()
{
    int start = -1;
    for (int i = 1; i <= m; i++)
    {
        if (degra[i] > 0 || degvao[i] > 0)
        {
            start = i;
            break;
        }
    }
    if (start == -1)
        return false;
    DFS(start);
    for (int i = 1; i <= m; i++)
    {
        if ((degra[i] > 0 || degvao[i] > 0) && used[i] == false)
            return false;
    }
    int vitribd = 0, vitrikt = 0;
    for (int i = 1; i <= m; i++)
    {
        int dif = degvao[i] - degra[i];
        if (dif == -1)
        {
            vitrikt++;
        }
        else if (dif == 1)
        {
            vitribd++;
        }
        else if (dif != 0)
        {
            return false;
        }
    }
    if (vitribd == 0 && vitrikt == 0)
        return true;
    return false;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        check = 0;
        cin >> m >> n;
        memset(degra, 0, sizeof(degra));
        memset(degvao, 0, sizeof(degvao));
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
            degra[x]++;
            degvao[y]++;
        }
        if (euler())
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
}
