//P11227
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s[99];
    int n,ans=0,card[5][14]={0};
    cin>>n;
    for(int i=1;i<=n;i++)
    {  
        cin>>s[i];
        if(s[i][1]=='A') s[i][1]='1';
        else if(s[i][1]=='T') s[i][1]='9'+1;
        else if(s[i][1]=='J') s[i][1]='9'+2;
        else if(s[i][1]=='Q') s[i][1]='9'+3;
        else if(s[i][1]=='K') s[i][1]='9'+4;
        switch (s[i][0])
        {
            case 'D':
            card[1][s[i][1]-'0']=1;
            break;
            case 'C':
            card[2][s[i][1]-'0']=1;
            break;
            case 'H':
            card[3][s[i][1]-'0']=1;
            break;
            case 'S':
            card[4][s[i][1]-'0']=1;
            break;
        }
    }
    for(int i=1;i<=4;i++)
        for(int j=1;j<=13;j++)
        {
            if(card[i][j]==0) ans++; 
        }
    cout<<ans;
    system("pause");
    return 0;
}