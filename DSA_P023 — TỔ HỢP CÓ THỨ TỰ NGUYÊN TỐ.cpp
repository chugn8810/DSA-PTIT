#include <bits/stdc++.h>
using namespace std;
int prime[1000005] = {0}, dem = 2;
void sang()
{
    prime[0] = prime[1] = 0;
    for (int i = 2; i * i <= 1000000; i++)
    {
        if (prime[i] == 0)
        {
            for (int j = i * i; j <= 1000000; j += i)
            {
                prime[j] = 1;
            }
        }
    }
}
void sinh(int m, int n)
{
    vector<int> a(m);
    iota(a.begin(), a.end(), 1);
    int i = m - 1;
    while (i >= 0)
    {
        i = m - 1;
        while (i >= 0 && a[i] == n - m + i + 1)
        {
            i--;
        }
        if (i == -1)
            return;
        a[i] += 1;
        for (int j = i + 1; j < m; j++)
        {
            a[j] = a[j - 1] + 1;
        }
        if (prime[dem] == 0)
        {
            cout << dem << ": ";
            for (int j = 0; j < m; j++)
            {
                cout << a[j] << " ";
            }
            cout << endl;
        }
        dem++;
    }
}
int main()
{
    sang();
    int m, n;
    cin >> m >> n;
    sinh(n, m);
    cout << endl;
}
