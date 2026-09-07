#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, check = 1;
        vector<int> a;
        cin >> n;
        while (n > 0)
        {
            if (n - 4 < 0 && n - 7 < 0)
            {
                check = 0;
                break;
            }
            if (n - 4 >= 0 && n % 7 != 0)
            {
                a.push_back(4);
                n -= 4;
            }
            else
            {
                a.push_back(7);
                n -= 7;
            }
        }
        sort(a.begin(), a.end());
        if (check == 0)
            cout << -1 << endl;
        else
        {
            for (int i = 0; i < a.size(); i++)
            {
                cout << a[i];
            }
            cout << endl;
        }
    }
}
