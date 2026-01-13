#include <bits/stdc++.h>
using namespace std;

int n, k, a, b;
float a_avg=0,b_avg=0;

int main()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        (i % k) ? (b += i,b_avg++) :(a += i,a_avg++);
    }
    a_avg = a / a_avg;
    b_avg = b / b_avg;
    
    cout << fixed << setprecision(1) << a_avg << " " << b_avg;
    return 0;
}