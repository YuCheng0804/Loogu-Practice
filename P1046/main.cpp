#include <bits/stdc++.h>
using namespace std;
/*
 根据题目，要求的是能摘到多少个苹果，知道苹果离地面的高度，以及陶陶手最多能伸多高，还有陶陶板凳的高度。
那么我可以知道的(陶陶手的长度 +板凳的高度)>=苹果的高度，那么就说明能摘到，做一个计数+1即可。
*/
int a[11];
int b, ans = 0;

int main()
{
    for (int i = 1; i < 11; i++)
    {
        cin >> a[i];
    }
    cin >> b;

    b += 30;
    for (int i = 1; i < 11; i++)
    {
        if (b >= a[i])
        {
            ans++;
        }
    }
    cout << ans;
    return 0;
}