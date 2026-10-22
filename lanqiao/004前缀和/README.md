# 前缀和 prefix
1.特性 
for(int i=1;i<=n;++i>)(a[0]=0)
    prefix[i]=prefix[i-1]+a[i];
2.区间和
sum(L,R)=prefix[R]-prefix[L-1];