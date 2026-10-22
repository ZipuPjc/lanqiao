# 枚举
--解空间
--循环枚举解空间
## 1. OJ191
拆项
bool f(int x)
{
  while(x)
  {
  int y=x%10;
  if(y==0||y==1||y==2||y==9)
    return true;
    x/=10;
  }
  return false;
}

## 2.OJ152
全局变量（函数有用）

## 3.OJ3227
map统计次数
map<int,int> mp;//键值对
int main()
{
  int n,m;cin>>n>>m;
  for(int i=1;i<=n*m;++i)
  {
    int x;cin>>x;
    mp[x]++;//直接用，默认初始化为0
  }
  for(const auto &[x,y]:mp)//mp.first mp.second-[x,y]
  {
    if(2*y>n*m)cout<<x<<'\n';
  }
}