#include <bits/stdc++.h>
using namespace std;
int m, n, total = 0, res = 0;
vector<int> a(1005);
void quaylui(int batdau, int tong, int conht)
{
    if (conht == n && batdau == m)
    {
        res++;
        return;
    }
    for (int i = batdau; i < m; i++)
    {
        tong += a[i];
        if (tong == total / n)
        {
            quaylui(i + 1, 0, conht + 1);
        }
    }
}
int main()
{
    total = 0, res = 0;
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
        total += a[i];
    }
    if (total % n != 0)
    {
        cout << 0 << endl;
        return 0;
    }
    quaylui(0, 0, 0);
    cout << res;
}
