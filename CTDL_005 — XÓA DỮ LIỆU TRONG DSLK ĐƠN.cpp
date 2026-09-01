#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
typedef struct Node *node;
node makenode(int x)
{
    node tmp = new Node();
    tmp->data = x;
    tmp->next = NULL;
    return tmp;
}
bool empty(node a)
{
    return a->next == NULL;
}
int size(node a)
{
    int cnt = 0;
    while (a != NULL)
    {
        cnt++;
        a = a->next;
    }
    return cnt;
}
void in(node a, int c)
{
    while (a != NULL)
    {
        if (a->data != c)
            cout << a->data << " ";
        a = a->next;
    }
}
void inserlastnode(node &a, int x)
{
    node tmp = makenode(x);
    if (a == NULL)
    {
        a = tmp;
        return;
    }
    node p = a;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = tmp;
}
int main()
{
    int n, c;
    cin >> n;
    node head = NULL;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        inserlastnode(head, x);
    }
    cin >> c;
    in(head, c);
}
