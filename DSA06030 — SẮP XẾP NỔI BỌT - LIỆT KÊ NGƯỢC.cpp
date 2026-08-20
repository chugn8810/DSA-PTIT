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
        vector<string> s;
        vector<int> a(m);
        for (int i = 0; i < m; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++)
        {
            int check = 0;
            for (int j = 0; j < m - i - 1; j++)
            {
                if (a[j] > a[j + 1])
                {
                    swap(a[j], a[j + 1]);
                    check = 1;
                }
            }
            if (check == 0)
                break;
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
}
