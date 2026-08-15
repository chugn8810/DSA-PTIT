#include <bits/stdc++.h>
using namespace std;
vector<string> s;
set<string> st;
int m, n;
void sinh()
{
    vector<int> a(m);
    iota(a.begin(), a.end(), 0);
    for (int i = 0; i < m; i++)
    {
        cout << s[a[i]] << " ";
    }
    cout << endl;
    int i = m - 1, so = s.size();
    while (i > -1)
    {
        i = m - 1;
        while (i >= 0 && a[i] == so - m + i)
        {
            i--;
        }
        if (i == -1)
            break;
        a[i] += 1;
        for (int j = i + 1; j < m; j++)
        {
            a[j] = a[j - 1] + 1;
        }
        for (int i = 0; i < m; i++)
        {
            cout << s[a[i]] << " ";
        }
        cout << endl;
    }
}
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        string f;
        cin >> f;
        st.insert(f);
    }
    for (auto it : st)
    {
        s.push_back(it);
    }
    sinh();
}
