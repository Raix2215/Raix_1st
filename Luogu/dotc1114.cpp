//dotc1114
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5];
    for(int i=1;i<=4;i++)
        cin>>a[i];
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=4;j++)
        {
            if(j!=i)
            {
                for(int k=1;k<=4;k++)
                {
                    if(k!=i &&k!=j)
                    {
                        cout<<i<<" "<<j<<" "<<k<<endl;
                    }
                }
            }
        }
    }

    system("pause");
    return 0;
}