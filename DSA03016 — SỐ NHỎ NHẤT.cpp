#include <bits/stdc++.h>
using namespace std;
int minso(int b)
{
    if (9 > b)
    {
        return b;
    }
    return 9;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, s;
        cin >> s >> m;
        if (m == 1 && s == 0)
        {
            cout << "0\n";
        }
        else if (s == 0 || s > 9 * m)
        {
            cout << "-1\n";
        }
        else
        {
            int s2[10000], tmp = s - 1;
            for (int i = m - 1; i >= 0; i--)
            {
                s2[i] = minso(tmp);
                tmp = tmp - s2[i];
            }
            s2[0]++;
            for (int i = 0; i < m; i++)
            {
                cout << s2[i];
            }
            cout << endl;
        }
    }
}
