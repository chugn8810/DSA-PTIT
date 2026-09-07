#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, Min = INT_MAX, res = INT_MAX;
    cin >> t;
    vector<int> a(t), b(t);
    for (int i = 0; i < t; i++)
    {
        cin >> a[i];
        Min = min(Min, a[i]);
    }
    for (int i = Min; i > 1; i--)
    {
        int tmp = 0, check = 1;
        for (int j = 0; j < t; j++)
        {
            tmp += (a[j] / (i + 1));
            b[j] = (a[j] / (i + 1)) + 1;
            tmp += 1;
        }
        for (int j = 0; j < t; j++)
        {
            if (a[j] / b[j] != i)
            {
                check = 0;
                break;
            }
        }
        if (check == 1)
            res = min(tmp, res);
    }
    cout << res;
}
