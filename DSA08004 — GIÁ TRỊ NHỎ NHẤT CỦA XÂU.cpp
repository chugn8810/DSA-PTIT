#include <bits/stdc++.h>
using namespace std;
void xuly(string s, int n)
{
    if (s.size() <= n)
    {
        cout << 0 << endl;
        return;
    }
    priority_queue<int> q;
    map<char, int> mp;
    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
    }
    for (auto it : mp)
    {
        q.push(it.second);
    }
    for (int i = 0; i < n; i++)
    {
        int tmp = q.top();
        q.pop();
        if (tmp - 1 != 0)
            q.push(--tmp);
    }
    long long res = 0;
    while (!q.empty())
    {
        long long tmp = q.top();
        res += (tmp * tmp);
        q.pop();
    }
    cout << res << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        string s;
        cin >> k >> s;
        xuly(s, k);
    }
}
