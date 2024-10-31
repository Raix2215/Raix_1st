//P7714
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a(1000001),ans(1000001);
    int t,n,pd=1;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>n;
        int lp=1,rp=1;
        for(int j=1;j<=n;j++)   cin>>a[j];
        while(lp<=rp && rp<=n)
        {
            while(a[rp]==rp && rp<=n)
            {
                rp++;
            }
            lp=rp;
            pd=rp;
            while(rp<=pd && rp<=n)
            {
                pd=max(a[rp],pd);
                rp++;
            }
            ans[i]+=rp-lp;
        }
    }
    for(int i=1;i<=t;i++) cout<<ans[i]<<endl;
    system("pause");
    return 0;
}