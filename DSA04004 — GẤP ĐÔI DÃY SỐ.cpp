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
        long long n, m;
        cin >> n >> m;
        xuly(n, m);
    }
}
