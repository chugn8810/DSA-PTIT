#include <bits/stdc++.h>
using namespace std;
vector<char> xau;
void sinh(int m)
{
    vector<int> a(m);
    iota(a.begin(), a.end(), 1);
    for (int j = 0; j < m; j++)
    {
        cout << xau[a[j] - 1];
    }
    cout << " ";
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
            cout << xau[a[j] - 1];
        }
        cout << " ";
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        xau.clear();
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            xau.push_back(s[i]);
        }
        int m = xau.size();
        sinh(m);
        cout << endl;
    }
}
