#include <bits/stdc++.h>
using namespace std;
using ll=long long;
const int N=50;
int a[N];

int main()
{
  string s="2021ABCD";
  for(int i=0;i<s.length();++i)
  {
    if('0'<=s[i]&&s[i]<='9')a[i]=s[i]-'0';
    else a[i]=s[i]-'A'+10;
  }

  ll x=0;
  for(int i=0;i<s.length();++i)
  {
    x=x*16+a[i];
  }
  cout<<x<<'\n';
  return 0;
}