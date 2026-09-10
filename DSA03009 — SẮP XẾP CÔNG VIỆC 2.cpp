#include <bits/stdc++.h>
using namespace std;
struct cv
{
    int stt, tg, tien;
};

bool sosanh(cv a, cv b)
{
    return a.tien > b.tien;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, maxdl = 0;
        cin >> m;
        vector<cv> a(m);
        for (int i = 0; i < m; i++)
        {
            cin >> a[i].stt >> a[i].tg >> a[i].tien;
            maxdl = max(maxdl, a[i].tg);
        }
        bool used[maxdl];
        memset(used, false, sizeof(used));
        sort(a.begin(), a.end(), sosanh);
        int solg = 0, res = 0, tgian = 0, dl = 0;
        for (int i = 0; i < m; i++)
        {
            for (int j = a[i].tg - 1; j >= 0; j--)
            {
                if (!used[j])
                {
                    used[j] = true;
                    solg++;
                    res += a[i].tien;
                    break;
                }
            }
        }
        cout << solg << " " << res << endl;
    }
}
