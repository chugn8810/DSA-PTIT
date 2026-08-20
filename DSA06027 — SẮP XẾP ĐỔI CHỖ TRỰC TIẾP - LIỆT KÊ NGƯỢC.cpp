#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, tmp = 1;
        cin >> m;
        vector<int> a(m), b;
        vector<string> s;
        for (int i = 0; i < m; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++)
        {
            int check = 0;
            for (int j = i + 1; j < m; j++)
            {
                if (a[i] > a[j])
                {
                    swap(a[i], a[j]);
                    check = 1;
                }
            }
            if (check == 1)
            {
                string xau;
                xau += "Buoc ";
                xau += to_string(tmp++);
                xau += ": ";
                for (int j = 0; j < m; j++)
                {
                    xau += to_string(a[j]);
                    xau += " ";
                }
                s.push_back(xau);
            }
        }
        for (int i = s.size() - 1; i >= 0; i--)
        {
            cout << s[i] << endl;
        }
    }
}
