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
        int n, res = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int tmp;
            cin >> tmp;
            if (tmp == 0)
                res++;
        }
        cout << res << endl;
    }
}
