#include <bits/stdc++.h>
using namespace std;
bool sosanh(pair<int, int> a, pair<int, int> b)
{
    if (a.second == b.second)
    {
        return a.first > b.first;
    }
    return a.second < b.second;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i].first >> a[i].second;
        }
        sort(a.begin(), a.end(), sosanh);
        int start = a[0].second, res = 1;
        for (int i = 1; i < n; i++)
        {
            if (start <= a[i].first)
            {
                res++;
                start = a[i].second;
            }
        }
        cout << res << endl;
    }
}
