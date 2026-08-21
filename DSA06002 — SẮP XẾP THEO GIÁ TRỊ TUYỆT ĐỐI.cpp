#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>
#include <sstream>
using namespace std;
vector<pair<int, int>> ds;
int k;
bool sosanh(pair<int, int> a, pair<int, int> b)
{
    if (abs(k - a.first) == abs(k - b.first))
        return a.second < b.second;
    return abs(k - a.first) < abs(k - b.first);
}
int main()
{
    int m;
    cin >> m;
    while (m--)
    {
        ds.clear();
        int a;
        cin >> a >> k;
        for (int i = 0; i < a; i++)
        {
            int x, y;
            cin >> x;
            ds.push_back(make_pair(x, i));
        }
        sort(ds.begin(), ds.end(), sosanh);
        for (int i = 0; i < a; i++)
        {
            cout << ds[i].first << " ";
        }
        cout << endl;
    }
}
