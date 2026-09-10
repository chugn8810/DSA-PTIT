#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    long long res = 0;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
            res += a[i] * 2;
    }
    cout << res << endl;
}
