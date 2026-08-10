#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> m >> n;
        vector<int> adj[1001];
        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            adj[x].push_back(y);
        }
        for (int i = 1; i <= m; i++)
        {
            cout << i << ": ";
            for (auto it : adj[i])
            {
                cout << it << " ";
            }
            cout << endl;
        }
    }
}
