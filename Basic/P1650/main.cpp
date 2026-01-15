#include <bits/stdc++.h>
using namespace std;
/*
两马相遇，根据速度值的大小就可以知道哪匹马会胜出。如果速度值相同，则和局，谁也不拿钱。
三种情况 赢输平 
那么根据贪心的思想就是能赢就赢，赢不了就用弱的去赢或者输或者平，保留强马；
可以用排序，降序排序，然后用指针移动。
最强和最强比
如果田比不过
{那么就看最慢马，如果最慢马能赢，胜场+1，不能的话就减一，平局的话指针移动。}
如果田比的过
{直接赢}
如果平的话
{那么选择最优的解法，保留强马。
看最弱马，如果最弱马和对面最弱马比的过，那么就用最弱跟最弱比
比不过的话，就用最弱马换对面最强马
}

*/

bool cmp(int x,int y)
{
    return x > y;
}

int main()
{
    int n,sc=0,ans;
    cin >> n;

    int a[n + 1],b[n + 1];

    for (int i = 1; i <= n;i++)
    {
        cin >> a[i];
    }
       for (int i = 1; i <= n;i++)
    {
        cin >> b[i];
    }

    sort(a + 1, a + n + 1,cmp);
    sort(b + 1, b + n + 1,cmp);

    int a_start=1, a_end=n, b_start=1, b_end=n;
    while(a_start<=a_end)
    {
        if(a[a_start]>b[b_start])
        {
            sc++;
            a_start++;
            b_start++;
        }
        else if(a[a_start]<b[b_start])
        {
            if(a[a_end]>b[b_start])
            {
                sc++;
                a_end--;
                b_start++;
            }
            else
            {
                if(a[a_end]<b[b_start])
                {
                sc--;
                }
                a_end--;
                b_start++;
            }
        }
        else
        {
            if(a[a_end]>b[b_end])
            {
                sc++;
                a_end--;
                b_end--;
            }
            else
            {
                if(a[a_end]<b[b_start])
                {
                    sc--;
                }
                a_end--;
                b_start++;
            }
        }
    }

    ans = sc * 200;
    cout << ans;
    return 0;
}