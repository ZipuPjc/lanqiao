# 差分数组
1.定义diff[i]=a[i]-a[i-1]
2.对差分数组做前缀和可以还原原数组
    diff[1]=a[1]
    diff[2]=a[2]-a[1]
    diff[3]=a[3]-a[2]
    -------
    diff[n]=a[n]-a[n-1]
3.将区间[l,r]都加上x
前缀和
diff[l]+=x;//将区间[l,n]都加上x
diff[r+1]-=x;//将区间[r+1,n]都减去x
不能实现边修改边查询，只能实现多次修改完成后多次查询
4.差分的实现 O(n)
for(int i=1;i<=n;++i) (a[0]=0)
    diff[i]=a[i]-a[i-1];
对diff做前缀和求原数组才会影响a[n]![alt text](image.png)