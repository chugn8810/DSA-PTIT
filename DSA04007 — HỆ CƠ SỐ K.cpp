#include <bits/stdc++.h>
using namespace std;
void xuly(string a, string b, int k)
{
    vector<int> res(max(a.size(), b.size()) + 1, 0);
    if (a.size() < b.size())
    {
        swap(a, b);
    }
    while (b.size() < a.size())
    {
        b = "0" + b;
    }
    for (int i = a.size() - 1; i >= 0; i--)
    {
        int sonho = i, soht = i + 1;
        int tong1 = (a[i] - '0') + (b[i] - '0');
        int tong = tong1 + res[soht];
        res[soht] = tong % k;
        res[sonho] += tong / k;
    }
    int f = 0;
    while (f < res.size() && res[f] == 0)
    {
        f++;
    }
    for (int i = f; i < res.size(); i++)
    {
        cout << res[i];
    }
    cout << endl;
}
int main()
{
    int m;
    cin >> m;
    while (m--)
    {
        string a, b;
        int k;
        cin >> k >> a >> b;
        xuly(a, b, k);
    }
}
