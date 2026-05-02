#include<iostream>
using namespace std;
int tmp[500005];
int s[500005];
long long int ans;
void merge_sort(int q[],int l,int r)
{
    if(l>=r)return;
    int mid=l+r>>1;
    merge_sort(q,l,mid);
    merge_sort(q,mid+1,r);
    int j=mid+1,k=0,i=l;
    while(i<=mid&&j<=r)
    {
        if(q[i]<=q[j])tmp[k++]=q[i++];
        else
        {
            tmp[k++]=q[j++];
            ans+=mid-i+1;
        }
    }
    while(i<=mid)tmp[k++]=q[i++];
    while(j<=r)tmp[k++]=q[j++];

    for(i=l,j=0;i<=r;i++,j++)
    {
        q[i]=tmp[j];
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&s[i]);
    }
    merge_sort(s,0,n-1);
    printf("%lld",ans);
    return 0;
}