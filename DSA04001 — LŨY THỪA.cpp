#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
int main()
{
    int t;
    cin >> t;
    while (t--)   
    {
        long long a, b;
        cin >> a >> b;
        if (a == 0 && b == 0)
            break;
        long long res = 1;
        a % MOD;
        while (b > 0)
        {
            if (b % 2 == 0)
            {
                a = (a % MOD * a % MOD) % MOD;
                b /= 2;
            }
            else if (b % 2 != 0)
            {
                res = (a % MOD * res % MOD) % MOD;
                b -= 1;
            }
        }
        cout << res << endl;
    }
}
