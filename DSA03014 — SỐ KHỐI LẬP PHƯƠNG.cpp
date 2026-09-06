#include <bits/stdc++.h>
using namespace std;
long long maxx = -1;
string s;
void quaylui(int j, string tmp)
{
    if (j > s.size())
        return;
    if (tmp.size() > 0)
    {
        long long check = stoll(tmp);
        long long can = round(cbrt(check));
        if (can * can * can == check)
        {
            maxx = max(maxx, check);
        }
    }
    quaylui(j + 1, tmp + s[j]);
    quaylui(j + 1, tmp);
}
int main()
{
    int m;
    cin >> m;
    while (m--)
    {
        s.clear();
        maxx = -1;
        cin >> s;
        string k = "";
        quaylui(0, k);
        cout << maxx << endl;
    }
}
