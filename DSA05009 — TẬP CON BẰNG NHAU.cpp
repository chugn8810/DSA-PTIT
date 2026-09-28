#include <bits/stdc++.h>
using namespace std;
int a[1000];
int n, total = 0, check = 0;
bool used[1000];
void quaylui(int tong, int batdau)
{
    if (check == 1 || tong > total / 2)
    {
        return;
    }
    if (tong == total / 2)
    {
        cout << "YES\n";
        check = 1;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (!used[i])
        {
            used[i] = true;
            quaylui(tong + a[i], i + 1);
            used[i] = false;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        check = 0;
        memset(used, false, sizeof(used));
        memset(a, 0, sizeof(a));
        total = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            total += a[i];
        }
        if (total % 2 != 0)
        {
            cout << "NO\n";
            continue;
        }
        quaylui(0, 0);
    }
}
