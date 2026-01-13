#include <bits/stdc++.h>
using namespace std;

int a, ans = 1;

int main()
{
    cin >> a;
    while (a!=1)
    {
        a = a / 2;
        ans++;
    }
    cout << ans;
    return 0;
}