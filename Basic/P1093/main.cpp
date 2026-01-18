#include <bits/stdc++.h>
using namespace std;

struct st
{
    int ch;
    int sum;
    int id;
} s[301];

bool cmp(st a, st b)
{
    if (a.sum == b.sum)
    {
        if (a.ch == b.ch)
        {
            return a.id > b.id;
        }
        else
        {
            return a.ch > b.ch;
        }
    }
    else
    {
        return a.sum > b.sum;
    }
}

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int english, ma;
        cin >> s[i].ch >> english >> ma;
        s[i].id = i;
        s[i].sum = s[i].ch + english + ma;
    }
    sort(s + 1, s + 1 + n, cmp);
    for (int i = 1; i <= 5; i++)
    {
        cout << s[i].id << " " << s[i].sum << endl;
    }
    return 0;
}