#include <bits/stdc++.h>
using namespace std;
void hal(int n)
{
    queue<pair<int, int>> q;
    q.push({n, 0});
    map<long long, bool> mp;
    while (!q.empty())
    {
        auto tmp = q.front();
        q.pop();
        if (tmp.first == 2)
        {
            cout << tmp.second + 1 << endl;
            return;
        }
        for (int i = 2; i <= sqrt(tmp.first); i++)
        {
            if (tmp.first % i == 0 && mp[tmp.first / i] == false)
            {
                int check = max(tmp.first / i, i);
                mp[check] = true;
                q.push({check, tmp.second + 1});
            }
        }
        if (mp[tmp.first - 1] == false)
        {
            mp[tmp.first - 1] = true;
            q.push({tmp.first - 1, tmp.second + 1});
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        hal(n);
    }
}
