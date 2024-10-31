//P1043_[NOIP2003 普及组] 数字游戏
#include<bits/stdc++.h>
using namespace std;
int a[55],n,m,sum[55],maxn,minn,ct,p0;
int dfs(int pi_l)
{
    int pi=pi_l+1;
    ct++;
    if(pi_l+1>n||ct>m) return;
    for(int j=1;j<=n;j++)
    {

    }
    dfs(pi);
}
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {    
        cin>>a[i];
        sum[i]=sum[i-1]+a[i];
    }
    for(int i=p0;i<=n;i++)
    {
        int result=dfs(i+1);

    }

    return 0;
}