#include<iostream>
using namespace std;
int a[1000005];
int cnt[1000005];
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int l=0;
    int r=-1;
    int judge=0;
    int ans_len=1e9;
    int ans_l;
    int ans_r;
    while(r<n-1)
    {
        r++;
        if(cnt[a[r]]==0)
        {
            judge++;
        }
        cnt[a[r]]++;
        while(judge==m)
        {
            int len=r-l+1;
            if(len<ans_len)
            {
                ans_len=len;
                ans_l=l;
                ans_r=r;
            }
            cnt[a[l]]--;
            if(cnt[a[l]]==0)
            {
                judge--;
            }
            l++;
        }
    }
    printf("%d %d",ans_l+1,ans_r+1);
    return 0;
}