#include <bits/stdc++.h>
using namespace std;
vector<string> a(105, "0");
string nhan(string a, string b)
{
    vector<int> res(a.size() + b.size(), 0);
    for (int i = a.size() - 1; i >= 0; i--)
    {
        for (int j = b.size() - 1; j >= 0; j--)
        {
            int sonho = i + j, soht = i + j + 1;
            int tich = (a[i] - '0') * (b[j] - '0');
            int tong = tich + res[soht];
            res[soht] = tong % 10;
            res[sonho] += tong / 10;
        }
    }
    int k = 0;
    while (k < res.size() && res[k] == 0)
    {
        k++;
    }
    string s;
    for (int i = k; i < a.size() + b.size(); i++)
    {
        s += (res[i] + '0');
    }
    return s;
}
string cong(string a, string b)
{
    vector<int> res(max(a.size(), b.size()) + 1, 0);
    if (a.size() < b.size())
    {
        swap(a, b);
    }
    while (b.size() < a.size())
    {
        b.insert(0, "0");
    }
    for (int i = a.size() - 1; i >= 0; i--)
    {
        int soht = i + 1, sonho = i;
        int tong1 = (a[i] - '0') + (b[i] - '0');
        int tong2 = tong1 + res[soht];
        res[soht] = tong2 % 10;
        res[sonho] += tong2 / 10;
    }
    int k = 0;
    while (k < res.size() && res[k] == 0)
    {
        k++;
    }
    string s;
    for (int i = k; i < res.size(); i++)
    {
        s += (res[i] + '0');
    }
    return s;
}
void xuly()
{
    a[0] = "1", a[1] = "1";
    for (int i = 2; i <= 100; i++)
    {
        for (int j = 0; j < i; j++)
        {
            string tmp = nhan(a[j], a[i - 1 - j]);
            a[i] = cong(tmp, a[i]);
        }
    }
}
int main()
{
    int m;
    cin >> m;
    xuly();
    while (m--)
    {
        int n;
        cin >> n;
        cout << a[n] << endl;
    }
}
