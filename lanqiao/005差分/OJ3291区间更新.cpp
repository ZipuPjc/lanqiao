#include <bits/stdc++.h>
using namespace std;

const int N=1e5+3;
int a[N],d[N];

void solve(int n,int m)
{
  for(int i=1;i<=n;++i)cin>>a[i];
  for(int i=1;i<=n;++i)d[i]=a[i]-a[i-1];

  while(m--)
  {
    int l,r,v;cin>>l>>r>>v;
    d[l]+=v,d[r+1]-=v;
  }
  //前缀和还原
  for(int i=1;i<=n;++i)a[i]=a[i-1]+d[i];
  for(int i=1;i<=n;++i)cout<<a[i]<<" \n"[i==n];
}

int main()
{
  int n,m;
  while(cin>>n>>m)solve(n,m);
  return 0;
}

