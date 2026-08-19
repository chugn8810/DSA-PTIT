#include <bits/stdc++.h>
using namespace std;
int res = 0, m, k;
void quaylui(string s, int sobuoc, int limit)
{
    int tmp = stoi(s);
    if (sobuoc == k)
    {
        if (tmp > res)
        {
            res = tmp;
        }
        return;
    }
    if (tmp > res)
    {
        res = tmp;
    }
    for (int i = limit; i < s.size(); i++)
    {
        string th = s;
        int f = s[i] - '0', vitri = i;
        for (int j = i; j < s.size(); j++)
        {
            int c = s[j] - '0';
            if (c >=f)
            {
                f = c;
                vitri = j;
            }
        }
        swap(th[i], th[vitri]);
        quaylui(th, sobuoc + 1, i);
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        res = 0;
        string s;
        cin >> k >> s;
        quaylui(s, 0, 0);
        cout << res << endl;
    }
}
