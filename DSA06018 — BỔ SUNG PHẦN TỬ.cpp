#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m;
    cin >> m;
    while (m--)
    {
        int a, res = 0;
        cin >> a;
        vector<int> b(a);
        for (int i = 0; i < a; i++)
        {
            cin >> b[i];
        }
        sort(b.begin(), b.end());
        for (int i = 1; i < a; i++)
        {
            if (b[i] - b[i - 1] > 1)
            {
                res += (b[i] - b[i - 1] - 1);
            }
        }
        cout << res << "\n";
    }
}
