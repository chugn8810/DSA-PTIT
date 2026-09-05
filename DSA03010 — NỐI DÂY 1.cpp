#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long m, res = 0;
        cin >> m;
        priority_queue<int, vector<int>, greater<int>> q;
        for (int i = 0; i < m; i++)
        {
            int tmp;
            cin >> tmp;
            q.push(tmp);
        }
        while (q.size() > 1)
        {
            int so1 = q.top();
            q.pop();
            int so2 = q.top();
            q.pop();
            int total = so1 + so2;
            res += total;
            q.push(total);
        }
        cout << res << endl;
    }
}
