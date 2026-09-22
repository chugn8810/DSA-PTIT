#include <bits/stdc++.h>
using namespace std;
map<int, int> dp[100000];
void add(int th, int x, int y)
{
    auto it = dp[th].lower_bound(x);
    auto ti = it;
    while (ti != dp[th].end() && ti->second >= y)
        ti++;
    dp[th].erase(it, ti);
    dp[th].insert({x, y});
}
bool check(int th, int x, int y)
{
    auto it = dp[th].lower_bound(x);
    if (it == dp[th].begin())
        return false;
    it--;
    return it->second < y;
}
int main()
{
    int n, res = 0;
    cin >> n;
    add(0, INT_MIN, INT_MIN);
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        int l = 0, r = res;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (check(mid, x, y))
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        res = max(res, l);
        add(l, x, y);
    }
    cout << res << endl;
}
