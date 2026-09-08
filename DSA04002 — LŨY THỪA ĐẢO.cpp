#include <bits/stdc++.h>
using namespace std;
long long MOD = 1e9 + 7;
long long pow(long long a, long long b)
{
    if (b == 1)
        return a % MOD;
    long long x = pow(a, b / 2);
    x = (x * x) % MOD;
    if (b % 2 != 0)
        return (x * a) % MOD;
    return x;
}
long long dao(long long a)
{
    long long res = 0;
    while (a != 0)
    {
        res = res * 10 + a % 10;
        a /= 10;
    }
    return res;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a;
        cin >> a;
        long long b = dao(a);
        cout << pow(a, b) << endl;
    }
}
