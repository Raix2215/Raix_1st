//P1601
#include<bits/stdc++.h>
using namespace std;
int main()
{
    // freopen("in.in","r",stdin);
    // freopen("out.out","w",stdout);
    int a[1010]={0},b[1010]={0},c[1010]={0};
    string A,B;
    cin>>A>>B;
    int Alen=A.length(),Blen=B.length();
    int len=max(Alen,Blen);
    for(int i=Alen-1,j=1;i>=0;i--,j++)
        a[j]=A[i]-'0';
    for(int i=Blen-1,j=1;i>=0;i--,j++)
        b[j]=B[i]-'0';
    for(int i=1;i<=len;i++)
    {
        c[i]=c[i]+a[i]+b[i];
        c[i+1]=c[i]/10;
        c[i]=c[i]%10;
    }
    if(c[len+1]!=0)
        len++;
    for(int i=len;i>=1;i--)
        cout<<c[i];
    system("pause");
    return 0;
}   