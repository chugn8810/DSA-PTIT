#include <bits/stdc++.h>
using namespace std;
int m, k;
int a[50][50], luu[50];
bool dadung[50] = {false};
vector<string> s;
void quaylui(int j, int tong)
{
    for (int i = 0; i < m; i++)
    {
        if (!dadung[i])
        {
            luu[j] = i;
            dadung[i] = true;
            if (j == m - 1)
            {
                if (tong + a[j][i] == k)
                {
                    string f;
                    for (int r = 0; r <= j; r++)
                    {
                        f += (luu[r] + 1 + '0');
                        f += " ";
                    }
                    s.push_back(f);
                }
            }
            else
            {
                quaylui(j + 1, tong + a[j][i]);
            }
            dadung[i] = false;
        }
    }
}
int main()
{

    cin >> m >> k;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    quaylui(0, 0);
    cout << s.size() << endl;
    for (int i = 0; i < s.size() ; i++)
    {
        cout << s[i] << endl;
    }
}
