#include <bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b)
{
    while (b != 0)
    {
        int tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        long long tmp = gcd(a, b);
        a = a / tmp;
        b = b / tmp;
        if (a == 1)
        {
            cout << a << "/" << b << endl;
            continue;
        }
        else
        {
            vector<long long> res;
            while (a > 0)
            {
                long long i = (b + a - 1) / a;
                res.push_back(i);
                a = a * i - b;
                b = b * i;
                long long tmp1 = gcd(a, b);
                a = a / tmp1;
                b = b / tmp1;
            }
            for (int i = 0; i < res.size(); i++)
            {
                cout << 1 << "/" << res[i] << ((i < res.size() - 1) ? " + " : "");
            }
            cout << endl;
        }
    }
}
