#include <bits/stdc++.h>
using namespace std;
vector<int> a(50), b(50);
int m, n;
bool check(string s)
{
    int dem = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '8')
            dem = 0;
        else
            dem++;
        if (dem > 3)
            return false;
    }
    return true;
}
void sinh()
{
    queue<string> s;
    s.push("8");
    while (!s.empty())
    {
        string q = s.front();
        s.pop();
        if (q.size() == m)
        {
            if (q[m - 1] != '8')
                if (check(q))
                    cout << q << endl;
        }
        else
        {
            s.push(q + '6');
            if (q[q.size() - 1] != '8')
            {
                s.push(q + '8');
            }
        }
    }
}
int main()
{
    cin >> m;
    sinh();
}
