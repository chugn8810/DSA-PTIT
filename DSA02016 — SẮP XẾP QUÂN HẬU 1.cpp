#include <bits/stdc++.h>
using namespace std;
int m, quan = 0;
bool hang[12], cheo2[20], cheo1[20];
void quaylui(int dem)
{
    for (int i = 1; i <= m; i++)
    {
        if (!hang[i] && !cheo2[dem - i + m] && !cheo1[dem + i - 1])
        {
            hang[i] = cheo2[dem - i + m] = cheo1[dem + i - 1] = true;
            if (dem == m)
            {
                quan += 1;
            }
            else
            {
                quaylui(dem + 1);
            }
            hang[i] = cheo1[dem + i - 1] = cheo2[dem - i + m] = false;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    for (int k = 1; k <= t; k++)
    {
        quan = 0;
        memset(hang, false, sizeof(hang));
        memset(cheo2, false, sizeof(cheo2));
        memset(cheo1, false, sizeof(cheo1));
        cin >> m;
        quaylui(1);
        cout << quan << endl;
    }
}
