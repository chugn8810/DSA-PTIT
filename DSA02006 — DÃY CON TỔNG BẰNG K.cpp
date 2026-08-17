#include <bits/stdc++.h>
using namespace std;
int m, n;
int a[10];
vector<int> luu;
bool used[10], check = true;
void quaylui(int tong)
{
    for (int i = 0; i < m; i++)
    {
        if (!used[i] && a[i] >=luu[luu.size() - 1])
        {
            used[i] = true;
            luu.push_back(a[i]);
            if (tong + a[i] == n)
            {
                check = false;
                cout << "[";
                for (int k = 1; k < luu.size(); k++)
                {
                    cout << luu[k];
                    if (k == luu.size() - 1)
                        cout << "";
                    else
                        cout << " ";
                }
                cout << "]" << " ";
            }
            else
            {
                quaylui(tong + a[i]);
            }
            luu.pop_back();
            used[i] = false;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        check = true;
        memset(used, false, sizeof(used));
        cin >> m >> n;
        for (int i = 0; i < m; i++)
        {
            cin >> a[i];
        }
        sort(a, a + m);
        luu.push_back(0);
        quaylui(0);
        if (check == true)
            cout << -1;
        cout << endl;
        luu.pop_back();
    }
}
