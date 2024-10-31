//P1147_连续自然数和
#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("in.in","r",stdin);
    freopen("out.out","w",stdout);
    int m,lp=1,rp=2,sum=0;
    cin>>m;
    sum=lp+rp;
    while(lp<rp and rp<=m)
    {
        if(sum<m and rp<=m)
        {
            while(sum<m and rp<=m)
            { 
                rp++;
                sum=sum+rp;
            }
        }
        else if(sum>m and rp<=m)
        {
            while(sum>m and rp<=m)
            {
                sum=sum-lp;
                lp++;
            }
        }
        else
        {
            cout<<lp<<" "<<rp<<endl;
            sum=sum-lp;
            lp++;
        }
    }
    return 0;
}