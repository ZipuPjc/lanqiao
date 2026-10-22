#include<bits/stdc++.h>
using namespace std;
const int N=120;
int a[N][N],b[N][N];
//全局二维数组自动赋值0
int main()
{
  int n,m;cin>>n>>m;
  int t;cin>>t;
  for(int i=1;i<=t;++i)
  {
    int x,y;cin>>x>>y;
    a[x][y]=b[x][y]=1;

  }
  int k;cin>>k;
  while(k--)
  {
    for(int i=1;i<=n;++i)
    {
      for(int j=1;j<=m;++j)
      {
        if(a[i][j]) b[i][j+1]=b[i][j-1]=b[i+1][j]=b[i-1][j]=1;
        //if(a[][]) 直接操作a时间会乱掉
      }
    }

    //将b复制回a
    for(int i=1;i<=n;++i)
    {
      for(int j=1;j<=m;++j)a[i][j]=b[i][j];
    }
  }
  int ans=0;
  for(int i=1;i<=n;++i)
  {
    for(int j=1;j<=m;++j)
    { 
      if(a[i][j])ans++;
    }
  }
  cout<<ans<<'\n';
  return 0;
}