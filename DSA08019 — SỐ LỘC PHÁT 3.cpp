#include <bits/stdc++.h>
using namespace std;
void xuly(int n)
{
    vector<long long> a;
    queue<string> q;
    q.push("8");
    q.push("6");
    while (!q.empty())
    {
        string tmp = q.front();
        q.pop();
        if (tmp.size() > n)
        {
            break;
        }
        a.push_back(stoll(tmp));
        q.push(tmp + '6');
        q.push(tmp + '8');
    }
    sort(a.begin(), a.end(), greater<long long>());
    cout << a.size() << endl;
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        xuly(k);
    }
}
