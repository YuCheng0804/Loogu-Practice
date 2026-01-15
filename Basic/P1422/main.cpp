#include <bits/stdc++.h>
using namespace std;
/*
简单分支题，要注意的是这题目不是说电费乘规定值，而是说的电费在各个部分求出的值然后求和。
*/
int n;
double b, ans;

int main()
{
    cin >> n;
    if (n <= 150)
    {
        b = n * 0.4463;
        ans += b;
    }
    else if (n >= 151)
    {
        if (n <= 400)
        {
            b = 150 * 0.4463 + (n - 150) * 0.4663;
            ans += b;
        }
        if (n >= 401)
        {
            b = 150 * 0.4463 + 250 * 0.4663 + (n - 400) * 0.5663;
            ans += b;
        }
    }
    cout << fixed << setprecision(1) << ans;

    return 0;
}