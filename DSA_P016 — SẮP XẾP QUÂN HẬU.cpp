#include <bits/stdc++.h>
using namespace std;
int banco[10][10], res = INT_MIN;
bool hang[9], cheo2[16], cheo1[16];
void quaylui(int tong, int dem)
{
    for (int i = 1; i <= 8; i++)
    {
        if (!hang[i] && !cheo2[dem - i + 8] && !cheo1[dem + i - 1])
        {
            hang[i] = cheo2[dem - i + 8] = cheo1[dem + i - 1] = true;
            if (dem == 8)
            {
                tong += banco[dem][i];
                if (tong > res)
                {
                    res = tong;
                }
            }
            else
            {
                quaylui(tong + banco[dem][i], dem + 1);
            }
            hang[i] = cheo1[dem + i - 1] = cheo2[dem - i + 8] = false;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    for (int k = 1; k <= t; k++)
    {
        res = INT_MIN;
        memset(hang, false, sizeof(hang));
        memset(cheo2, false, sizeof(cheo2));
        memset(cheo1, false, sizeof(cheo1));
        for (int i = 1; i <= 8; i++)
        {
            for (int j = 1; j <= 8; j++)
            {
                cin >> banco[i][j];
            }
        }
        quaylui(0, 1);
        cout << "Test " << k << ": " << res << endl;
    }
}
