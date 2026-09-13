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
        vector<int> a(n), b(n, 0), c(n, 0);
        for (int &i : a)
        {
            cin >> i;
        }
        for (int i = 0; i < n; i++)
        {
            b[i] = a[i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (a[i] > a[j])
                {
                    b[i] = max(b[i], b[j] + a[i]);
                }
            }
        }
        int maxx = 0;
        for (int i = 0; i < n; i++)
        {
            maxx = max(maxx, b[i] );
        }
        cout << maxx << endl;
    }
}
