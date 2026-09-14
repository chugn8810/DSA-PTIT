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
        cin >> n >> m >> k;
        vector<long long> a(n + m);
        for (int i = 0; i < n + m; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        cout << a[k - 1] << endl;
    }
}
