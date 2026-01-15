#include<bits/stdc++.h>
using namespace std;

bool da(int a,int b)
{
        return a<b;
}
int main()
{
   int side[3]={0};
    for(int i=0;i<=2;i++)
    {
        cin>>side[i];
    }
    sort(side,side+3,da);

    if(bool(side[0]+side[1]>side[2])==0)
    {
        cout<<"Not triangle"<<endl;
    }
    else
    {
        if(pow(side[0],2)+pow(side[1],2)>pow(side[2],2))
        {
            cout<<"Acute triangle"<<endl;
        }
        if(pow(side[0],2)+pow(side[1],2)==pow(side[2],2))
        {
            cout<<"Right triangle"<<endl;
        }
        if(pow(side[0],2)+pow(side[1],2)<pow(side[2],2))
        {
            cout<<"Obtuse triangle"<<endl;
        }
        if(side[0]==side[1] or side[0]==side[2] or side[1]==side[2])
        {
            cout<<"Isosceles triangle"<<endl;
        }
        if(side[0]==side[1] && side[1]==side[2])
        {
            cout<<"Equilateral triangle"<<endl;
        }
    }  
    return 0;
}
