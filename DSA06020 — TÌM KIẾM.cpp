#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;
bool binary(vector<int> &a, int n)
{
    int r = 0, l = a.size() - 1;
    while (r <= l)
    {
        int tmp = (r + l) / 2;
        if (a[tmp] == n)
            return true;
        if (a[tmp] > n)
            l = tmp - 1;
        else
            r = tmp + 1;
    }
    return false;
}
int main()
{
    int m;
    cin >> m;
    while (m--)
    {
        int t, n;
        cin >> t >> n;
        vector<int> a(t);
        for (int i = 0; i < t; i++)
        {
            cin >> a[i];
        }
        if (binary(a, n))
            cout << 1 << endl;
        else
            cout << -1 << endl;
    }
}
