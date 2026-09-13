#include <bits/stdc++.h>
using namespace std;
int binary(vector<int> a, int b)
{
    int r = a.size() - 1, l = 0;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (a[mid] == b)
            return mid;
        else if (a[mid] < b)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> m >> n;
        vector<int> a(m);
        for (int i = 0; i < m; i++)
        {
            cin >> a[i];
        }
        int res = binary(a, n);
        if (res != -1)
            cout << res + 1 << endl;
        else
            cout << "NO\n";
    }
}
