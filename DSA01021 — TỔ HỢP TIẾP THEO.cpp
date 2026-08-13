#include <bits/stdc++.h>
using namespace std;
vector<int> a(50), b(50);
int m, n;
void check()
{
    int dem = 0;
    int dem1[50];
    for (int i = 0; i < m; i++)
    {
        bool check = true;
        for (int j = 0; j < m; j++)
        {
            if (a[i] == b[j])
            {
                check = false;
                break;
            }
        }
        if (check == true)
        {
            dem++;
        }
    }
    cout << dem << endl;
}
void sinh()
{
    int i = m - 1;
    while (i >= 0 && a[i] == n - m + i + 1)
    {
        i--;
    }
    if (i == -1)
    {
        cout << m << endl;
        return;
    }
    else
    {
        a[i] += 1;
        for (int j = i + 1; j < m; j++)
        {
            a[j] = a[j - 1] + 1;
        }
    }
    check();
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        for (int i = 0; i < m; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++)
        {
            b[i] = a[i];
        }
        sinh();
    }
}
