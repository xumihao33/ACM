#include<iostream>
#include<algorithm>
using namespace std;
long long rount[100005];
long long A[100005],B[100005],C[100005];
long long diff[100005];
long long cnt[100005];
void insert(int l,int r)
{
    diff[l]++;
    diff[r]--;
}
int main()
{
    int N,M;
    scanf("%d%d",&N,&M);
    for(int i=1;i<=M;i++)
    {
        scanf("%d",&rount[i]);
    }

    for(int i=1;i<N;i++)
    {
        scanf("%d%d%d",&A[i],&B[i],&C[i]);
    }
    for(int i=1;i<M;i++)
    {
        int first=rount[i];
        int second=rount[i+1];
        if(first>second)swap(first,second);
        insert(first,second);
    }
    long long total_cost = 0;
    
    
    for (int i = 1; i < N; ++i)
    {
        cnt[i] = cnt[i-1] + diff[i];
        long long cost_paper = cnt[i] * A[i];
        long long cost_ic = C[i] + cnt[i] * B[i];
        total_cost += min(cost_paper, cost_ic);
    }
    printf("%d",total_cost);
    return 0;
}