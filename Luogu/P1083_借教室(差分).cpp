//P1083
#include<bits/stdc++.h>
using namespace std;
int n,m,lp,rp;
vector<int> d(1000005),s(1000005),t(1000005);
vector<long long> re(1000005),ne(1000005);      //re：每天总教室数  ne：每天需要的教室数（rest，need）

int pd(int x)                                   //从第一个订单一直访问至第x个订单（也为中间值mp），
{                                               //并判断是否满足条件（是为1，否为0）

    vector<long long> diff(1000005,0);          //每次初始化差分数组
    for(int i=1;i<=x;i++)                       //获得差分数组                       
    {                                           
        diff[s[i]]=diff[s[i]]+d[i];             //差分使用：即在要改变的区间左端（s[i]）增加相应的值，并在右端下标+1（t[i]+1）处
        diff[t[i]+1]=diff[t[i]+1]-d[i];         //减去相应的值，后续再根据差分数组递推出新数组结果，即可极大减少运算次数，并提高效率。
    }
    for(int i=1;i<=n;i++)
    {
        ne[i]=ne[i-1]+diff[i];                  //通过差分数组递推新数组
        if(ne[i]>re[i]) return 0;               //判断是否符合条件
    }
    return 1;
}
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        scanf("%d",&re[i]);
    for(int j=1;j<=m;j++)
        scanf("%d%d%d",&d[j],&s[j],&t[j]);  //输入数据
    int lp=1;rp=m;                          //分别定义二分的左右指针
    if(pd(m)==1)                            //如果直接可以满足就可结束程序
    {
        cout<<"0";
        return 0;
    }
    else
    {
        while(lp<rp)                        //二分使用：即不断取半区间减少查询次数
        {                                   //每次从1列举至mp处
            int mp=(lp+rp)/2;               
            if(pd(mp)==1) lp=mp+1;          //折半区间
            else rp=mp;                     //最后lp=rp=mp
        }
    }   
    cout<<-1<<endl<<lp;
    system("pause");
    return 0;
}