#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, n;
    cin >> t >> n;
    vector<int> a(t);
    int prefix[t];
    for (int i = 0; i < t; i++)
    {
        cin >> a[i];
    }
    prefix[-1] = 0;
    for (int i = 0; i < t; i++)
    {
        if (a[i] > 0)
            prefix[i] = a[i] + prefix[i - 1];
        else
            prefix[i] = prefix[i - 1];
    }
    while (n--)
    {
        int r, l;
        cin >> r >> l;
        cout << prefix[l - 1] - prefix[r - 2] << "\n";
    }
}
