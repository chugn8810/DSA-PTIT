#include <bits/stdc++.h>
using namespace std;
void xuly(long long n, long long k)
{
    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }
    if (k == (1LL << (n - 1)))
    {
        cout << n << endl;
        return;
    }
    if (k > (1LL << (n - 1)))
    {
        xuly(n - 1, k - (1LL << (n - 1)));
    }
    else
    {
        xuly(n - 1, k);
    }
}
int main()
{
    int m;
    cin >> m;
    while (m--)
    {
        int MOD = 123456789;
        long long n, m;
        cin >> n;
        long long a = 2, res = 1;
        n -= 1;
        while (n != 0)
        {
            if (n % 2 != 0)
            {
                res = (a * res) % MOD;
                n -= 1;
            }
            a = (a * a) % MOD;
            n /= 2;
        }
        cout << res << endl;
    }
}
