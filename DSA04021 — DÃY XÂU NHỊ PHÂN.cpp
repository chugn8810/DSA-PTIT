#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<long long> a(93);
void fibo()
{
    a[1] = 1, a[2] = 1;
    for (int i = 3; i <= 92; i++)
    {
        a[i] = a[i - 2] + a[i - 1];
    }
}
void xuly(long long n, long long k)
{
    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }
    if (n == 2)
    {
        cout << 1 << endl;
        return;
    }
    long long tmp1 = a[n - 1];
    long long tmp2 = a[n - 2];
    if (k > tmp2)
    {
        xuly(n - 1, k - tmp2);
    }
    else
    {
        xuly(n - 2, k);
    }
}
int main()
{
    fibo();
    int m;
    cin >> m;
    while (m--)
    {
        long long n, k;
        cin >> n >> k;
        xuly(n, k);
    }
}
