#include <bits/stdc++.h>
using namespace std;
void hal(int n, int t)
{
    queue<pair<long long, long long>> q;
    q.push({n, 0});
    map<long long, bool> mp;
    while (!q.empty())
    {
        auto tmp = q.front();
        q.pop();
        if (tmp.first == t)
        {
            cout << tmp.second << endl;
            return;
        }
        if (tmp.first - 1 == t || tmp.first * 2 == t)
        {
            cout << tmp.second + 1 << endl;
            return;
        }
        if (tmp.first - 1 >= 0 && mp[tmp.first - 1] == 0)
        {
            q.push({tmp.first - 1, tmp.second + 1});
            mp[tmp.first - 1] = 1;
        }
        if (tmp.first * 2 <= t * 2 && mp[tmp.first * 2] == 0)
        {
            q.push({tmp.first * 2, tmp.second + 1});
            mp[tmp.first * 2] = 1;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        hal(n, k);
    }
}
