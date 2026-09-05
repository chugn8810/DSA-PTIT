#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    int m;
    cin >> m;
    vector<int> a(m);
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }

    bool ok = true;
    for (int i = 0; i + 2 < m; i++)
    {
        if (i % 2 == 0 && a[i] > a[i + 2])
        {
            ok = false;
            break;
        }
        if (i % 2 != 0 && a[i] < a[i + 2])
        {
            ok = false;
            break;
        }
    }
    if (ok)
        cout << "Yes\n";
    else
        cout << "No\n";
}
int main()
{

    int t;
    if (cin >> t)
    {
        while (t--)
        {
            solve();
        }
    }
    return 0;
}
