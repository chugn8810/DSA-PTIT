#include <bits/stdc++.h>
using namespace std;
int b[20];
bool check(vector<int> &a)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] != b[i])
        {
            return false;
        }
    }
    return true;
}
void sinh(int m)
{
    int dem = 1;
    vector<int> a(m);
    iota(a.begin(), a.end(), 1);
    if (check(a))
    {
        cout << dem << endl;
        return;
    }
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
        dem++;
        if (check(a))
        {
            cout << dem << endl;
            return;
        }
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
        memset(b, 0, sizeof(b));
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        sinh(m);
    }
}
