#include<iostream>
using namespace std;
void quick_sort(int q[],int l,int r)
{
    if(l>=r)return;
    int i=l-1,j=r+1;
    int tmp=q[l+r>>1];
    while(i<j)
    {
        do i++;while(q[i]<tmp);
        do j--;while(q[j]>tmp);
        if(i<j)swap(q[i],q[j]);
    }
    quick_sort(q,l,j);
    quick_sort(q,j+1,r);
}
int main()
{
    int N;
    scanf("%d",&N);
    int n[10000];
    for(int i=0;i<N;i++)
    {
        scanf("%d",&n[i]);
    }
    quick_sort(n,0,N-1);
    int ans[10000];
    int ans_num=1;
    ans[0]=n[0];
    for(int i=1;i<N;i++)
    {
        if(n[i]!=n[i-1])
        {
            ans[ans_num++] = n[i]; 
        }
    }
    printf("%d\n",ans_num);
    for(int i=0;i<ans_num;i++)
    {
        printf("%d ",ans[i]);
    }
    return 0;
}