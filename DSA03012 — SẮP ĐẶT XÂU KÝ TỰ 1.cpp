#include <iostream>
#include <string>
#include <map>
#include <set>
#include <sstream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <fstream>
using namespace std;
int main()
{
    int m;
    cin >> m;
    while (m--)
    {
        int maxx = 0;
        string s;
        cin >> s;
        map<char, int> mp;
        for (int i = 0; i < s.size(); i++)
        {
            mp[s[i]]++;
        }
        for (auto it : mp)
        {
            maxx = max(maxx, it.second);
        }
        if (maxx <= (s.size() + 1) / 2)
            cout << 1 << endl;
        else
            cout << -1 << endl;
    }
}
