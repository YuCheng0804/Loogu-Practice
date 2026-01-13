#include <bits/stdc++.h>
using namespace std;

int n;
int a[1002];
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int m = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] < m)
        {
            m = a[i];
        }
    }
    cout << m;
    return 0;
}