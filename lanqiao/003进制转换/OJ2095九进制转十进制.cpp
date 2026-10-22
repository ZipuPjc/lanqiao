#include <iostream>
using namespace std;
using ll=long long;

const int N=10;
int a[N];

int main()
{
  int n=4;
  string s="2022";
  for(int i=0;i<4;i++)a[i]=s[i]-'0';
  ll x=0;
  for(int i=0;i<n;i++)x=x*9+a[i];
  cout<<x;
  return 0;
}