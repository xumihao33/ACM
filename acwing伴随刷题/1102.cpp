#include<iostream>
#include<algorithm>
using namespace std;

long long a[2000005];

int find_lower_bound(long long q[], int len, long long target)
{
    int l = -1;
    int r = len;
    while(l + 1 < r)
    {
        int mid = l + (r - l) / 2;
        if(q[mid] < target)
        {
            l = mid;
        }
        else
        {
            r = mid;
        }
    }
    return r;
}

int find_upper_bound(long long q[], int len, long long target)
{
    int l = -1;
    int r = len;
    while(l + 1 < r)
    {
        int mid = l + (r - l) / 2;
        if(q[mid] <= target)
        {
            l = mid;
        }
        else
        {
            r = mid;
        }
    }
    return r;
}

int main()
{
    int N;
    long long C;
    long long ans = 0;
    
    scanf("%d%lld", &N, &C);
    for(int i = 0; i < N; i++)
    {
        scanf("%lld", &a[i]);
    }
    
    sort(a, a + N);
    
    for(int i = 0; i < N; i++)
    {
        long long target = a[i] + C; 
        
        int lid = find_lower_bound(a, N, target);
        int rid = find_upper_bound(a, N, target);
        ans += (rid - lid);
    }
    
    printf("%lld\n", ans);
    return 0;
}