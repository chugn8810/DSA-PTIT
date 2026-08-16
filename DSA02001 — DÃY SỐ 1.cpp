#include <bits/stdc++.h>
using namespace std;
vector<int> a;
void quaylui(vector<int> &c, int m)
{
    vector<int> b;
    for (int i = 0; i < c.size() - 1; i++)
    {
        int tmp = c[i] + c[i + 1];
        b.push_back(tmp);
    }
    cout << "[";
    for (int i = 0; i < b.size(); i++)
    {
        cout << b[i] << ((i == b.size() - 1) ? "" : " ");
    }
    cout << "]" << endl;
    if (m == 1)
    {
        return;
    }
    else
    {
        quaylui(b, m - 1);
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        a.clear();
        int m;
        cin >> m;
        if (m == 1)
        {
            for (int i = 0; i < m; i++)
            {
                int k;
                cin >> k;
                a.push_back(k);
            }
            cout << "[";
            for (int i = 0; i < a.size(); i++)
            {
                cout << a[i] << ((i == a.size() - 1) ? "" : " ");
            }
            cout << "]" << endl;
            continue;
        }
        for (int i = 0; i < m; i++)
        {
            int k;
            cin >> k;
            a.push_back(k);
        }
        cout << "[";
        for (int i = 0; i < a.size(); i++)
        {
            cout << a[i] << ((i == a.size() - 1) ? "" : " ");
        }
        cout << "]" << endl;
        quaylui(a, m - 1);
    }
}
