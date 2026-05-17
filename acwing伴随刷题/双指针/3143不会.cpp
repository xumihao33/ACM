#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int N,K;
    scanf("%d%d",&N,&K);
    vector<int>a(N);
    for(int i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a.begin(),a.end());
    int ans=1;
    int l=0;
    int r=1;
    while(N-l<ans&&l<r)
    {
        if(a[r]-a[l]<=K)
        {
            if(ans<r-l+1)
            {
                ans=l-r+1;
            }
            r++;
        }
        else
        {
            l++;
        }
    }
    printf("%d",ans);
    return 0;
}