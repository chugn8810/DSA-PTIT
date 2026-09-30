#include <bits/stdc++.h>
using namespace std;
void hal(int n)
{
    queue<string> q;
    q.push("9");
    while (!q.empty())
    {
        string s = q.front();
        q.pop();
        int tmp = stoi(s);
        if (tmp % n == 0)
        {
            cout << tmp << endl;
            return;
        }
        q.push(s + "0");
        q.push(s + "9");
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        hal(n);
    }
}
