#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, tmp = 1;
    cin >> m;
    vector<int> a(m);
    vector<string> s;
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m - 1; i++)
    {
        int vitri = i;
        for (int j = i + 1; j < m; j++)
        {
            if (a[vitri] > a[j])
            {
                vitri = j;
            }
        }
        swap(a[i], a[vitri]);
        string xau;
        xau += "Buoc ";
        xau += to_string(tmp++);
        xau += ": ";
        for (int j = 0; j < a.size(); j++)
        {
            xau += to_string(a[j]);
            xau += " ";
        }
        s.push_back(xau);
    }
    for (int i = s.size() - 1; i >= 0; i--)
    {
        cout << s[i] << endl;
    }
}
