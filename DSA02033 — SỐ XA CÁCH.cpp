#include <bits/stdc++.h>
using namespace std;
void sinh(int m)
{
    int dem = 1;
    vector<int> a(m);
    iota(a.begin(), a.end(), 1);
    int i = m - 2;
    while (i > -1)
    {
        i = m - 2;
        while (i >= 0 && a[i] > a[i + 1])
        {
            i--;
        }

        if (i == -1)
            break;
        int vitri = -1;
        for (int j = i + 1; j < m; j++)
        {
            int min = 100;
            if (a[j] > a[i] && min > a[j])
            {
                min = a[j];
                vitri = j;
            }
        }
        swap(a[i], a[vitri]);
        reverse(a.begin() + i + 1, a.end());
        int check = 0;
        for (int j = 0; j < m - 1; j++)
        {
            if (abs(a[j + 1] - a[j]) == 1)
            {
                check = 1;
                break;
            }
        }
        if (check == 1)
            continue;
        for (int j = 0; j < m; j++)
        {
            cout << a[j];
        }
        cout << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m;
        cin >> m;
        sinh(m);
    }
}
