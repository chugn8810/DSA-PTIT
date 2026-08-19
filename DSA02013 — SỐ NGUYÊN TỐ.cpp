#include <bits/stdc++.h>
using namespace std;
int n, p, s, prime[1005], luu[10];
vector<int> ngto;
vector<string> res;
void sang()
{
    prime[0] = prime[1] = 1;
    for (int i = 2; i * i <= 1000; i++)
    {
        if (prime[i] == 0)
        {
            for (int j = i * i; j <= 1000; j += i)
            {
                prime[j] = 1;
            }
        }
    }
    for (int j = 0; j <= 1000; j++)
    {
        if (prime[j] == 0)
        {
            ngto.push_back(j);
        }
    }
}
void quaylui(int so, int tong)
{
    if (tong > s || so > n)
    {
        return;
    }
    if (tong == s && so == n)
    {
        string s;
        for (int i = 0; i < n; i++)
        {
            s += to_string(luu[i]);
            s += " ";
        }
        res.push_back(s);
    }
    for (int i = 0; i < ngto.size(); i++)
    {
        if (ngto[i] > luu[so - 1] && ngto[i] > p)
        {
            luu[so]=ngto[i];
            quaylui(so + 1, tong + ngto[i]);
        }
    }
}
int main()
{
    sang();
    int t;
    cin >> t;
    while (t--)
    {
        res.clear();
        cin >> n >> p >> s;
        quaylui(0, 0);
        cout << res.size() << endl;
        for (int i = 0; i < res.size(); i++)
        {
            cout << res[i] << endl;
        }
    }
}
