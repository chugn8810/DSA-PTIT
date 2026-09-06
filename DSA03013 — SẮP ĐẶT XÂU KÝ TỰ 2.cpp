#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m;
    cin >> m;
    while (m--)
    {
        int n, maxx = 0, cnt = 0;
        string s;
        cin >> n >> s;
        map<char, int> mp;
        for (int i = 0; i < s.size(); i++)
        {
            mp[s[i]]++;
        }
        for (auto it : mp)
        {
            maxx = max(it.second, maxx);
        }
        for (auto it : mp)
        {
            if (maxx == it.second)
                cnt++;
        }
        int tmp = (maxx - 1) * n + cnt;
        if (tmp <= s.size())
        {
            cout << 1 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}
