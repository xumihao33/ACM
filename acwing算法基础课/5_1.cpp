#include<iostream>
using namespace std;
//快速排序
void quick_sort(int q[],int l,int r)
{
    if(l>=r)return ;
    int judge=q[l];
    int i=l-1,j=r+1;
    while(i<j)
    {
        do i++;while(q[i]<judge);
        do j--;while(q[j]>judge);
        if(i<j)swap(q[i],q[j]);
    }    
    quick_sort(q,l,j);
    quick_sort(q,j+1,r);
}
void test1()
{
    int n;
    scanf("%d",&n);
    int q[100];
    for(int i=0;i<n;i++)scanf("%d",&q[i]);
    quick_sort(q,0,n-1);
    for(int i=0;i<n;i++)printf("%d ",q[i]);
}
//归并排序
int n;
int tmp[100];
void merge_sort(int q[],int l,int r)
{
    if(l>=r)return ;
    int mid=(l+r)>>1;
    merge_sort(q,l,mid),merge_sort(q,mid+1,r);

    int k=0,i=l,j=mid+1;
    while(i<=mid&&j<=r)
    {
        if(q[i]<=q[j])tmp[k++]=q[i++];
        else tmp[k++]=q[j++];
    }
    while(i<=mid)tmp[k++]=q[i++];
    while(j<=r)tmp[k++]=q[j++];
    for(i=l,j=0;i<=r;i++,j++)
    {
        q[i]=tmp[j];
    }
}
void test2()
{
int n;
    scanf("%d",&n);
    int q[100];
    for(int i=0;i<n;i++)scanf("%d",&q[i]);
    merge_sort(q,0,n-1);
    for(int i=0;i<n;i++)printf("%d ",q[i]);
}
bool check(int mid)
{

}
//区间[l,r]被划分为[l,mid-1]和[mid,r]
void bsearch_1(int l,int r)
{
    while(l<r)
    {
        int mid=l+r+1>>1;
        if(check(mid))l=mid;
        else r=mid-1;
    }
}
//区间[l,r]被划分为[l,mid]和[mid+1,r]
void bsearch_2(int l,int r)
{
    while(l<r)
    {
        int mid=l+r>>1;
        if(check(mid))r=mid;
        else l=mid+1;
    }
}
void  test3()
{

}
int main()
{
    test3();
    return 0;
}