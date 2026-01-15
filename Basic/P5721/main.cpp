#include <bits/stdc++.h>
using namespace std;

int n;
int cnt = 1;

int main()
{
    cin >> n;
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            if (cnt < 10)
            {
                cout << '0' << cnt;
            }
            else
            {
                cout << cnt;
            }
            cnt++;
        }
        cout << endl;
    }
    return 0;
}