//P1387_最大正方形
#include<bits/stdc++.h>
using namespace std;
int map1[1005][1005],map2[1005][1005];
int main()
{
    int n,m,step=1,ans=1;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            scanf("%d",&map1[i][j]);
            if(i!=0 && j!=0)    map2[i][j]=map2[i-1][j]+map2[i][j-1]-map2[i-1][j-1]+map1[i][j];
            // else if(i==0 && j!=0)   map2[i][j]=map2[i][j-1]+map1[i][j];
            // else if(i!=0 && j==0)   map2[i][j]=map2[i-1][j]+map1[i][j];
            // else map2[i][j]=map1[i][j];
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(map1[i][j]==0) continue;
            while(i+step<=n && j+step<=m)
            {
                // if(i==0&&j==0)
                // {
                //    if(map2[i+step][j+step]==pow(step+1,2))
                //     {
                //         if(step<ans) step++;
                //         else step++,ans++;
                //     }
                //     else break;
                // }
                // if(i==0&&j!=0)
                // {
                //     if(map2[i+step][j+step]-map2[i+step][j-1]==pow(step+1,2))
                //     {
                //         if(step<ans) step++;
                //         else step++,ans++;
                //     }
                //     else break;
                // }
                if(i!=0&&j!=0)
                {
                    if(map2[i+step][j+step]-(map2[i+step][j-1]+map2[i-1][j+step]-map2[i-1][j-1])==pow(step+1,2))
                    {
                        if(step<ans) step++;
                        else step++,ans++;
                    }
                    else break;
                }
                // else
                // {
                //     if(map2[i+step][j+step]-map2[i-1][j+step]==pow(step+1,2))
                //     {
                //         if(step<ans) step++;
                //         else step++,ans++;
                //     }
                //     else break;
                // }
            }
            step=1;
        }
    }
    if(map2[n][m]==0) ans=0;
    cout<<ans;
    return 0;
}
