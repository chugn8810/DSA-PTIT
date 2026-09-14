#include <bits/stdc++.h>
using namespace std;
int MOD = 1e9 + 7;
long long a[93];
int main()
{
    int m;
    cin >> m;
    while (m--)
    {
        int n, res = 0;
        cin >> n;
        vector<long long> a(n), b(n - 1);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            cin >> b[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] != b[i])
            {
                res = 1;
                cout << i + 1 << endl;
                break;
            }
        }
        if (res == 0)
        {
            cout << n  << endl;
        }
    }
}
