#include <bits/stdc++.h>
using namespace std;
const int N=1e6;
using ll=long long;
ll a[N],d[N];

void solve(int &n,int &m)
{
  
  for(int i=1;i<=n;++i)cin>>a[i];
  for(int i=1;i<=n;++i)d[i]=a[i]-a[i-1];

  while(m--)
  {
    ll l,r,x;cin>>l>>r>>x;
    d[l]+=x;d[r+1]-=x;
  }

  for(int i=1;i<=n;++i)a[i]=d[i]+a[i-1];
  for(int i=1;i<=n;++i)cout<<max(0ll,a[i])<<" \n"[i==n];
}//max() 的两个参数通常需要具有相同的类型
//" \n"[i == n] 等价于 if (i == n)cout << '\n'; else cout << ' ';
//当条件为 false 时取第一个字符，为 true 时取第二个字符

int main()
{
  int n,m;cin>>n>>m;
  solve(n,m);

  return 0;
}