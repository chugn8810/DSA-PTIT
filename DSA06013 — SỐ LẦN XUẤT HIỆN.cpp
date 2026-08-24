#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m;
    cin >> m;
    while (m--)
    {
        map<int, int> mp;
        int a, b;
        cin >> a >> b;
        for (int i = 0; i < a; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }
        if (mp.count(b) != 0)
            cout << mp[b] << "\n";
        else
            cout << -1 << "\n";
    }
}
