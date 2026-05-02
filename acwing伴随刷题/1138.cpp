#include<iostream>
#include<string>
using namespace std;
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
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int N[10005];
    for(int i=0;i<n;i++)scanf("%d",&N[i]);
    quick_sort(N,0,n-1);
    int ans[10000];
    int ans_num=1;
    ans[0]=N[0];
    for(int i=1;i<n;i++)
    {
        if(N[i]!=N[i-1])
        {
            ans[ans_num++] = N[i]; 
        }
    }
    if(ans_num<k)printf("NO RESULT");
    else printf("%d",ans[k-1]);
    return 0;
}