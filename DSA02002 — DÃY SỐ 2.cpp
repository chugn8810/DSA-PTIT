#include <bits/stdc++.h>
using namespace std;
vector<int> a;
vector<string> ketqua;
void quaylui(vector<int> &c, int m)
{
    vector<int> b;
    for (int i = 0; i < c.size() - 1; i++)
    {
        int tmp = c[i] + c[i + 1];
        b.push_back(tmp);
    }
    string s;
    s += "[";
    for (int i = 0; i < b.size(); i++)
    {
        s += to_string(b[i]);
        s += ((i == b.size() - 1) ? "" : " ");
    }
    s += "]";
    ketqua.push_back(s);
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
        string s;
        a.clear();
        ketqua.clear();
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
        s += "[";
        for (int i = 0; i < a.size(); i++)
        {
            s += to_string(a[i]);
            s += ((i == a.size() - 1) ? "" : " ");
        }
        s += "]";
        ketqua.push_back(s);
        quaylui(a, m - 1);
        for (int i = ketqua.size() - 1; i >= 0; i--)
        {
            cout << ketqua[i] << " ";
        }
        cout << endl;
    }
}
