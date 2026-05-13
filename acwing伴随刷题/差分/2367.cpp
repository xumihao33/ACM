#include<iostream>
using namespace std;
int diff[5000005];
void insert(int l,int r,int c)
{
    diff[l]+=c;
    diff[r+1]-=c;
}
int main()
{
    int n,p;
    scanf("%d%d",&n,&p);
    for(int i=1;i<=n;i++)
    {
        int score;
        scanf("%d",&score);
        insert(i,i,score);
    }
    for(int i=1;i<=p;i++)
    {
        int l,r,c;
        scanf("%d%d%d",&l,&r,&c);
        insert(l,r,c);
    }
    int score=1e9;
    for(int i=1;i<=n;i++)
    {
        diff[i]+=diff[i-1];
        if(diff[i]<score)
        {
            score=diff[i];
        }
    }
    printf("%d",score);
    return 0;
}