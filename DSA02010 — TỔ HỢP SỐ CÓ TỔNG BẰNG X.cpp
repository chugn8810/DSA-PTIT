#include <bits/stdc++.h>
using namespace std;
int n, p, a[100], luu[1000], check = 0;
void quaylui(int tong, int buoc)
{
    if (tong > p)
    {
        return;
    }
    if (tong == p)
    {
        check = 1;
        cout << "[";
        for (int i = 0; i < buoc; i++)
        {
            cout << luu[i];
            if (i == buoc - 1)
                cout << "";
            else
                cout << " ";
        }
        cout << "]";
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= luu[buoc - 1])
        {
            luu[buoc] = a[i];
            quaylui(tong + a[i], buoc + 1);
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
        cin >> n >> p;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        quaylui(0, 0);
        if (check == 0)
        {
            cout << -1;
        }
        cout << endl;
    }
}
