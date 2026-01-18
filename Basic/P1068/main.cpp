#include <bits/stdc++.h>
using namespace std;
/* 
这道题目的关键是cmp和一个条件循环，也就是说我们要找出最终进入面试的选手为笔试成绩不低于面试分数线的所有选手，这里的关键是不低于，也就是>= 所以这里有一个条件循环 为什么不用for？
因为for是规定次数的，你并不知道什么时候停下来。
然后就是一个结构体（因为编号和成绩是连在一个人身上的，一个整体）。接着就是cmp的编写，
*/
int n, m;
struct zyz
{
    int bh;
    int cj;
} s[5001];

bool cmp(zyz x, zyz y)//这个cmp的意思就是 当他是true时候，x在y前面。
{
    if (x.cj == y.cj)
    {
        return x.bh < y.bh;//这里是升序，如果x的编号比y的编号小 就让x在前面
    }
    else
    {
        return x.cj > y.cj;//这里是降序，如果x比y大，就让x在前面
    }
}
int main()
{
    cin >> n >> m;
    int h = m * 150 / 100;
    int cnt=0;
    for (int i = 1; i <= n; i++)
    {
        cin >> s[i].bh >> s[i].cj;
    }
    
    sort(s + 1, s + 1 + n, cmp);

    int j=1;
        while (s[j].cj >= s[h].cj)
        {
            cnt++;
            j++;
        }
    
    cout << s[h].cj << " " << cnt<<endl;
    for (int  i = 1; i <= cnt; i++)
    {
        cout << s[i].bh << " " << s[i].cj << endl;
    }
    

    return 0;
}