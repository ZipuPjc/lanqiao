#include<bits/stdc++.h>
using namespace std;

int a,b,c;

bool f(int x)
{
  if(x%a!=0&&x%b!=0&&x%c!=0)
  return true;
  return false;
}

int main()
{
  int n;cin>>n;
  int ans=0;
  
  cin>>a>>b>>c;

  for(int i=1;i<=n;i++)
  { 
    if(f(i)) ans++;
  }
  cout<<ans<<'\n';
}