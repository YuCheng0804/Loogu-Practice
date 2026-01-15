#include<bits/stdc++.h>
using namespace std;
int a,b,c;
int m=8;
int day=0;
int main()
{
    for(int i=1;i<=7;i++)
    {
        cin>>a>>b;
        c=a+b;
        if(c>m)
        {
            m=c;
            day=i;
        }
    }
    cout<<day;
    return 0;
}
