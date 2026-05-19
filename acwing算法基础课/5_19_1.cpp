//单调队列：找滑动窗口的最小值
#include<iostream>
using namespace std;
const int N=10010;
int hh,tt=-1;
int q[N],a[N];
int n,k;
int main()
{
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    {
        if(hh<=tt&&q[hh]<i-k+1)hh++;
        while(hh<=tt&&a[q[tt]]>=a[i])tt--;
        q[++tt]=1;
        if(i>=k-1)printf("%d",a[q[hh]]);
    }
    puts(" ");
    return 0;
}
