#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
using PII=pair<int,int>;
int main()
{
    int n;
    scanf("%d",&n);
    vector<PII>seg(n);
    for(int i=0;i<n;i++)
    {
        scanf("%d%d",&seg[i].first,&seg[i].second);
    }
    sort(seg.begin(),seg.end());
    int last_l=seg[0].first,last_r=seg[0].second;
    for(int i=1;i<n;i++)
    {
        if(last_r>=seg[i].first)
        {
            last_r=max(seg[i].second,last_r);
        }
        else{
            printf("%d %d\n",last_l,last_r);
            last_l=seg[i].first;
            last_r=seg[i].second;
        }
    }
    printf("%d %d\n",last_l,last_r);
    return 0;
}