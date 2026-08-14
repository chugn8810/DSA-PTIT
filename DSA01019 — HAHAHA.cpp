#include <bits/stdc++.h>
using namespace std;
vector<int> a(50), b(50);
int m, n;
void sinh()
{
    queue<string> s;
    s.push("H");
    while (!s.empty())
    {
        string q = s.front();
        s.pop();
        if (q.size() == m)
        {
            if (q[m - 1] != 'H')
                cout << q << endl;
        }
        else
        {
            s.push(q + 'A');
            if (q[q.size() - 1] != 'H')
            {
                s.push(q + 'H');
            }
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> m;
        sinh();
    }
}
