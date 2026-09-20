#include <bits/stdc++.h>
using namespace std;
void xuly(string a, string b)
{
    vector<int> res(a.size() + b.size(), 0), ketqua;
    for (int i = a.size() - 1; i >= 0; i--)
    {
        for (int j = b.size() - 1; j >= 0; j--)
        {
            res[i + j + 1] += (a[i] - '0') * (b[j] - '0');
        }
    }
    int nho = 0;
    for (int i = res.size() - 1; i >= 0; i--)
    {
        int tong = res[i] + nho;
        res[i] = tong % 2;
        nho = tong / 2;
    }
    int f = 0;
    while (f < res.size() && res[f] == 0)
    {
        f++;
    }
    if (f == res.size())
    {
        cout << 0 << endl;
        return;
    }
    for (int i = f; i < res.size(); i++)
    {
        ketqua.push_back(res[i]);
    }
    reverse(ketqua.begin(), ketqua.end());
    long long tong = 0;
    for (int i = 0; i < ketqua.size(); i++)
    {
        if (ketqua[i] != 0)
        {
            tong += (1LL << i);
        }
    }
    cout << tong << endl;
}
int main()
{
    int m;
    cin >> m;
    while (m--)
    {
        string a, b;
        cin >> a >> b;
        xuly(a, b);
    }
}
