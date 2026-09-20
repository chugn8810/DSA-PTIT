#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int m;
    cin >> m;
    while (m--)
    {
        int n;
        cin >> n;
        vector<int> a(n + 1, 1), b(n + 1, 1), c(n + 1, 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        for (int i = 2; i <= n; i++)
        {
            if (a[i] > a[i - 1])
            {
                b[i] = b[i - 1] + 1;
            }
            else
                b[i] = 1;
        }
        for (int i = n - 1; i >= 1; i--)
        {
            if (a[i] > a[i + 1])
            {
                c[i] = c[i + 1] + 1;
            }
            else
                c[i] = 1;
        }
        int maxx = 0;
        for (int i = 1; i <= n; i++)
        {
            maxx = max(maxx, b[i] + c[i] - 1);
        }
        cout << maxx << endl;
    }
}
