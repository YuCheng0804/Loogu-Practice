#include<bits/stdc++.h>
using namespace std;

int N[1005]={0};
int n;

int main()
{
    int cnt=0;
    cin >> n;
    for (int i = 0;i<n;i++)
    {
        int x;
        cin >> x;
        N[x]++;
        if (N[x] == 1) // 这里是卡住我的一个地方，我最开始是直接让N[x]=1 这个时候判断cnt就很麻烦，但是这里的处理就很巧妙判断==1 然后底下的输出用!=0
                       // 为什么我没想到？因为我在默认N[x]=1的情况下思考，没有去考虑这个状态的变化 也就是初次出现 到出现很多次 如果出现很多次用什么样的方法去让他只输出一次
                       // 这个时候很自然的就能想到第一次是1 然后很多次的话 底下就用!=0
                       // 其实这里也可以用N[x]=1 怎么写呢? if(N[x]=0) {cnt++ N[x]==1}然后底下的判断就是N[i]=1
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    for (int i = 1; i < 1001;i++)
    {
        if(N[i]!=0)
        {
            cout << i<<" ";
        }
    }
        return 0;
}