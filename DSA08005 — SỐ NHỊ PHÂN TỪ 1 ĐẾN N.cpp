#include <bits/stdc++.h>
using namespace std;
void hal(int n)
{
    vector<string> res;
    queue<string> q;
    q.push("1");
    while (res.size() != n && !q.empty())
    {
        string s = q.front();
        q.pop();
        res.push_back(s);
        q.push(s + "0");
        q.push(s + "1");
    }
    for (auto it : res)
    {
        cout << it << " ";
    }
    cout << endl;
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
