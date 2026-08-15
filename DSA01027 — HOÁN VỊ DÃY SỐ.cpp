#include <bits/stdc++.h>
using namespace std;
vector<int> b;
void sinh(int m)
{
    int dem = 1;
    vector<int> a(m);
    iota(a.begin(), a.end(), 1);
    for (int j = 0; j < m; j++)
    {
        cout << b[a[j]] << " ";
    }
    cout << endl;
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
        for (int j = 0; j < m; j++)
        {
            cout << b[a[j]] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int m;
    cin >> m;
    for (int i = 1; i <= m; i++)
    {
        int x;
        cin >> x;
        b.push_back(x);
    }
    sort(b.begin(), b.end());
    b.insert(b.begin(), 0);
    sinh(m);
}
