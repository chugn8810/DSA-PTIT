#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, res = 0;
        string s;
        priority_queue<int> q;
        map<char, int> mp;
        cin >> n >> s;
        for (int i = 0; i < s.size(); i++)
        {
            mp[s[i]]++;
        }
        for (auto it : mp)
        {
            q.push(it.second);
        }
        while (n--)
        {
            if (q.empty())
                break;
            long long t = q.top();
            q.pop();
            t--;
            q.push(t);
        }
        while (!q.empty())
        {
            long long tmp = q.top();
            res += (tmp * tmp);
            q.pop();
        }
        cout << res << endl;
    }
}
