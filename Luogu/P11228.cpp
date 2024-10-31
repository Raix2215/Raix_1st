//P11228 [CSP-J 2024]
#include<bits/stdc++.h>
using namespace std;
int ans[60],map2[10020][10020];
char map1[10020][10020];
int T,n[60],m[60],k[60],x00,y00,d00,i=1,i00,k00,pd,tem;
void pd2();
void pd1();
int main()
{
    cin>>T;
    for(i=1;i<=T;i++)
    {
        i00=i;
        cin>>n[i]>>m[i]>>k[i];
        cin>>x00>>y00>>d00;
        for(int j=1;j<=n[i];j++)
            for(int k=1;k<=m[i];k++)
                cin>>map1[j][k];
        k00=k[i];
        pd1();
        for(int j=1;j<=n[i];j++)
            for(int k=1;k<=m[i];k++)
                if(map2[j][k]==1) ans[i]++,map2[j][k]=0;
    }
    for(int l=1;l<=T;l++)
    {
        if (ans[l]!=0)
            cout<<ans[l]<<endl;
        else cout<<1<<endl;
    }
    system("pause");
    return 0;
}
void pd1()
{
    if(k00<=0) return;
    pd2();
    if(tem>=1 && tem<=4)
    {
        map2[x00][y00]=1;
        switch (tem)
        {
            case 1: y00++; break;
            case 2: x00++; break;
            case 3: y00--; break;
            case 4: x00--; break;
        }
        map2[x00][y00]=1;
        pd1();
    }
    else return;
}
void pd2()
{
    if(d00==0 && map1[x00][y00+1]=='.' && k00>0 && (x00<=n[i00]&&x00>=1&&y00+1<=m[i00]&&y00+1>=1))
    { 
        k00--;
        tem=1;
    }
    else if(d00==1 && map1[x00+1][y00]=='.' && k00>0 && (x00+1<=n[i00]&&x00+1>=1&&y00<=m[i00]&&y00>=1))
    { 
        k00--;
        tem=2;
    }
    else if(d00==2 && map1[x00][y00-1]=='.' && k00>0 && (x00<=n[i00]&&x00>=1&&y00-1<=m[i00]&&y00-1>=1))
    { 
        k00--;
        tem=3;
    }
    else if(d00==3 && map1[x00-1][y00]=='.' && k00>0 && (x00-1<=n[i00]&&x00-1>=1&&y00<=m[i00]&&y00>=1))
    { 
        k00--;
        tem=4;
    }
    else if(k00<=0) tem=5;
    else
    {
        k00--;
        d00=(d00+1)%4;
        tem=0;
        pd2();
    }
}
