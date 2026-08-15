#include <bits/stdc++.h>
using namespace std;
int b[20], m, n;
bool check(vector<int> &a)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] != b[i])
        {
            return false;
        }
    }
    return true;
}
void sinh()
{
    int dem = 1;
    vector<int> a(m);
    iota(a.begin(), a.end(), 1);
    if (check(a))
    {
        cout << dem << endl;
        return;
    }
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
        dem++;
        if (check(a))
        {
            cout << dem << endl;
            return;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        memset(b, 0, sizeof(b));
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        sinh();
    }
}
