#include <bits/stdc++.h>
using namespace std;
struct dovat
{
    int w, val;
    float tile;
};
bool sosanh(dovat a, dovat b)
{
    return a.tile > b.tile;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int c, n;
        cin >> n >> c;
        vector<dovat> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i].val >> a[i].w;
            a[i].tile = (float)a[i].val / a[i].w;
        }
        sort(a.begin(), a.end(), sosanh);
        float val = 0;
        int solg = 0, tmp = 0;
        for (int i = 0; i < n; i++)
        {
            if (solg <= c)
            {
                tmp = i;
                val += a[i].val;
                solg += a[i].w;
            }
        }
        if (solg > c)
        {
            val -= (a[tmp].tile * (solg - c));
        }
        cout << fixed << setprecision(2) << val << endl;
    }
}
