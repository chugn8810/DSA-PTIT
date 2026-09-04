#include <bits/stdc++.h>
using namespace std;
int m, n, k, maxx = 0;
string luu;
string a[5][5];
bool used[5][5];
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
vector<string> s, res;
bool check()
{
    for (int i = 0; i < s.size(); i++)
    {
        if (luu == s[i])
            return true;
    }
    return false;
}
void quaylui(int x, int y)
{
    if (check())
    {
        res.push_back(luu);
    }
    if (luu.size() > maxx)
    {
        return;
    }
    for (int i = 0; i < 8; i++)
    {
        int tmpx = x + dx[i];
        int tmpy = y + dy[i];
        if (tmpx >= 0 && tmpx < n && tmpy >= 0 && tmpy < k && !used[tmpx][tmpy])
        {
            used[tmpx][tmpy] = true;
            luu += a[tmpx][tmpy];

            quaylui(tmpx, tmpy);
            used[tmpx][tmpy] = false;
            luu.pop_back();
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        maxx = 0;
        cin >> m >> n >> k;
        s.clear();
        res.clear();
        luu.clear();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < k; j++)
            {
                used[i][j] = false;
            }
        }
        for (int i = 0; i < m; i++)
        {
            string tmp;
            cin >> tmp;
            s.push_back(tmp);
            int d = tmp.size();
            maxx = max(d, maxx);
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < k; j++)
            {
                cin >> a[i][j];
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < k; j++)
            {
                used[i][j] = true;
                luu += a[i][j];
                quaylui(i, j);
                used[i][j] = false;
                luu.pop_back();
            }
        }
        if (res.empty())
        {
            cout << -1 << endl;
        }
        else
        {
            for (auto it : res)
            {
                cout << it << " ";
            }
            cout << endl;
        }
    }
}
