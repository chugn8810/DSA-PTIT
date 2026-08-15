#include <bits/stdc++.h>
using namespace std;
map<int, char> mp;
int m, n;
void lm()
{
    for (int i = 0; i < 16; i++)
    {
        mp[i + 1] = (char)(65 + i);
    }
}
void sinh()
{
    vector<int> a(m);
    iota(a.begin(), a.end(), 1);
    for (int i = 0; i < m; i++)
    {
        cout << mp[a[i]];
    }
    cout << endl;
    int i = m - 1;
    while (i > -1)
    {
        i = m - 1;
        while (i >= 0 && a[i] == n - m + i + 1)
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
            cout << mp[a[i]];
        }
        cout << endl;
    }
}
int main()
{
    lm();
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        sinh();
    }
}
