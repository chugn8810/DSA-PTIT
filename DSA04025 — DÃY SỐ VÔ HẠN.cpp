#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
const int MOD = 1e9 + 7;
long long b, c, d, e;
void fibo(int n, long long a[])
{
    if (n == 0)
    {
        a[0] = 0;
        a[1] = 1;
        return;
    }
    fibo(n / 2, a);
    b = a[0];
    c = a[1];
    d = 2 * c - b;
    if (d < 0)
        d += MOD;
    d = (d * b) % MOD;
    e = (b * b + c * c) % MOD;
    if (n % 2 == 0)
    {
        a[0] = d;
        a[1] = e;
    }
    else
    {
        a[0] = e;
        a[1] = e + d;
    }
}
int main()
{
    int m;
    cin >> m;
    while (m--)
    {
        long long a[2] = {0, 1};
        int n;
        cin >> n;
        fibo(n, a);
        cout << a[0] << endl;
    }
}
