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
        int n, m, k, res = 0;
        cin >> n >> k;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        auto it = upper_bound(a.begin(), a.end(), k);
        if (it - a.begin() == 0)
        {
            cout << -1 << endl;
            continue;
        }
        cout << it - a.begin() << endl;
    }
}
