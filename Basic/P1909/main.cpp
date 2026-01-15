#include<bits/stdc++.h>
using namespace std;
int main()
{
    int z[3]={0};
    int n,a,b,c;//a是个数，b是价格
    cin>>n;
    for(int i=0;i<=2;i++)
    {
        cin>>a>>b;
        if(n%a!=0)
        {
        c=(n/a)+1;
        z[i]=c*b;
        }
        else
        {
            c=n/a;
            z[i]=c*b;
        }
    }
    
    sort(z,z+3);
    cout<<z[0];
    
    return 0;
}
