# 进制转换
1.任意进制转十进制--按权展开,每一位乘以对应的进制权重,再求和
for(int i=0;i<n;++i)
    x=x*k+a[i];

2.十进制转任意进制--短除法,反复除以k,记录余数,最后倒序输出
a0=x%k;x/=k(a1重复a0过程)
while(x)a[cnt++]=x%k,x/=k;(cnt--count)
reverse(a,a+cnt);

3.N转M,N转10 10转M

核心OJ1230