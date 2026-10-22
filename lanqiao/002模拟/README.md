# 模拟
逻辑--小函数
## 1.OJ549
//扫描九宫格
for(int _i=max(1,i-1);_i<=min(n,i+1);++_i)
{
    for(int _j=max(1,j-1);_j<=min(m,j+1);++_j)
            if(mp[_i][_j])ans[i][j]++;
}

## 2.OJ551
while(k--)
{
    for(int i=1;i<=n;++i)
    {
      for(int j=1;j<=m;++j)
        if(a[i][j]) b[i][j+1]=b[i][j-1]=b[i+1][j]=b[i-1][j]=1;
        //if(a[][]) 直接操作a时间会乱掉
    }
    for(int i=1;i<=n;++i)//将b复制回a
      for(int j=1;j<=m;++j)a[i][j]=b[i][j];
}

## 3.OJ498
### 1.string->int 
for(const auto &i:s)res=res*10+i-'0';

### 2.int->string(位数)
string i2s(int x,int w)
{//换数组也可以，字符串后续拼接好做
  string res;
  while(x)res+=(x%10)+'0',x/=10;
  while(res.length()<w)res+='0'; //不足位加0
  reverse(res.begin(),res.end());
  //[first, last)左闭右开;int无迭代器无法使用reverse
  return res;
}

### 3.思路
1.拆--year,month,day(substr(),s2i)(cin默认string)
2.三层循环:年月日-向后找-判断合法(isok,isLeapYear)
3.拼接-回文判断(i2s,+(date),isPa)(bool ans1,ans2判断是否成功)

