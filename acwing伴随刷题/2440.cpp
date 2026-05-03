#include<iostream>
#include<algorithm>
using namespace std;
int a[100005];
 int n,k;
bool check(int mid)
{
    int over=0;
    for(int i=0;i<n;i++)
    {
        over+=a[i]/mid;
    }
    if(over>=k)return true;
    else return false;
}
int main()
{
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,a+n);
    int heghest=a[n-1];
    int r=heghest+1;
    int l=0;
    while(l+1<r)
    {
        int mid=l+(r-l)/2;
        if(check(mid))l=mid;
        else r=mid;
    }
    printf("%d",r-1);
    return 0;
}