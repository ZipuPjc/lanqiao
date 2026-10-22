#include <bits/stdc++.h>
using namespace std;
using ll=long long;

//N进制转10，10转M进制

const int N=1000;
int a[N];

char ch[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};

void solve()
{
  int n,m;cin>>n>>m;
  string s;cin>>s;

  for(int i=0;i<s.length();++i) 
  {
    if(s[i]>='0'&&s[i]<='9')a[i]=s[i]-'0';
    else a[i]=s[i]-'A'+10;
  }

  ll x=0;
  for(int i=0;i<s.length();++i) x=x*n+a[i];

  string ans;
  while(x)
  {
    ans +=ch[x%m];
    x/=m;
  }
  reverse(ans.begin(),ans.end());
  cout<<ans<<'\n';
}

int main()
{
  int t;cin>>t;
  while(t--)solve();
  return 0;
}