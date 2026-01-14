#include<bits/stdc++.h>
using namespace std;

/* 
这道题目是判断区间内这个数字出现多少次，那么我们就用分解数位的方法，我最开始想的也是分解数位，但是分解的方法不对。后面查询到CSDN里面的分解数位，因为/是向下取整嘛，比如724/10 =72.4
因为向下取整，所有等于72，这样就可以每次舍去个位，同时我们可以用%10去得到个位，因此思路成立，AC过。
*/
int n, x,cnt;
int main()
{
    cin >> n >> x;
    for (int i = 1; i <= n;i++)
    {
        int b = i;
        while (b!=0)
        {
            if(b%10==x)
                cnt++;
            b=b / 10;
        }
    }
    cout << cnt;
    return 0;
}