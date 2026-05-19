#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

typedef pair<int,int> PII;

int main()
{
    int n;
    if (scanf("%d", &n) != 1) return 0; 
    
    vector<PII> seg(n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d%d", &seg[i].second, &seg[i].first);
    }
    
    sort(seg.begin(), seg.end());
    
    int ans = 0;
    int last = -1;
    for(int i = 0; i < n; i++)
    {
        if(seg[i].second >= last) 
        {
            ans++;
            last = seg[i].first; 
        }
    }
    
    printf("%d\n", ans);
    return 0;
}