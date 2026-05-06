#include<iostream>
using namespace std;
int a[1000005];
int b[100005];
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    int target=0;
    while(m--)
    {
        int l=-1;
        int r=n;
        while(l+1<r)
        {
            int mid=l+(r-l)/2;
            if(a[mid]<b[target])l=mid;
            else r=mid;
        }
        if(r<n&&a[r]==b[target])printf("%d ",r+1);
        else printf("-1 ");
        target++;
    }
    return 0;
}