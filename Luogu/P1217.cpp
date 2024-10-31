//P1217	[USACO1.5] 回文质数 Prime Palindromes
#include<bits/stdc++.h>
using namespace std;
int alen=0,blen=0,anst=0;
bool check1(int n)
{
    for(int j=2;j<=ceil(sqrt(n));j++)
        if(n%j==0)  return false;
    return true;
}
bool check2(int x)
{
    int a[20]={0},xlen=1;
    while(x!=0)
    {
        a[xlen]=x%10;
        x=x/10;
        xlen++;
    }
    for(int i=1;i<=xlen/2;i++)
    {
        if(a[i]!=a[xlen-i]) return false;
    }
    return true;
}
bool check3(int x)
{
    if((1000<=x&&x<=9999)||(100000<=x&&x<=999999)) return false;
    return true;
}
int main()
{
    freopen("!in.in","r",stdin);
    // freopen("!out.out","w",stdout);
    int a,b;
    cin>>a>>b;
    if(a==2) cout<<2<<endl;
    int m=(a%2==0)?a+1:a;
    for(int i=m;i<=b;i+=2)
    {
        if(check3(i)==0) continue;
        if(check2(i)==0) continue;
        if(check1(i)==0) continue;
        printf("%d\n",i);
    }
    system("pause");
    return 0;
}