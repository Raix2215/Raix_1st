// P1604
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[2077]={0},b[2077]={0},c[4096]={0},la,lb,l,B;
    string a1,b1;
    cin>>B>>a1>>b1;
    la=a1.length(),lb=b1.length();
    for(int i=la-1,j=1;i>=0;i--,j++)
    {    
        if(a1[i]>='A') a[j]=a1[i]-55;
        else a[j]=(a1[i]-'0');
    }
    for(int i=lb-1,j=1;i>=0;i--,j++)
    {    
        if(b1[i]>='A') b[j]=b1[i]-55;
        else b[j]=(b1[i]-'0');
    }
    l=max(la,lb);
    for(int i=1;i<=l;i++)
    {
        c[i]=c[i]+a[i]+b[i];
        c[i+1]=c[i]/B;
        c[i]=c[i]%B;
    }
    if(c[l+1]!=0) l++;
    for(int i=l;i>=1;i--)
    {
        if(c[i]<10) cout<<c[i];
        else
        {
            char temp;
            temp=c[i]-10+'A';
            cout<<temp;
        } 
    }
    return 0;
}