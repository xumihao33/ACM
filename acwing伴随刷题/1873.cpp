#include<iostream>
#include<algorithm>
using namespace std;

long long a[1000005];
int N;
long long M;

bool check(long long H)
{
    long long over = 0;
    for(int i = 0; i < N; i++)
    {
        over += (a[i] - H < 0) ? 0 : a[i] - H;
    }
    return over >= M;
}

int main()
{
    scanf("%d%lld", &N, &M);
    for (int i = 0; i < N; i++)
    {
        scanf("%lld", &a[i]);
    }
    
    sort(a, a + N);
    
    long long highest = a[N - 1];
    long long l = -1;
    long long r = highest + 1;
    
    while(l + 1 < r)
    {
        long long mid = l + (r - l) / 2;
        if(check(mid)) l = mid;
        else r = mid;
    }
    
    printf("%lld\n", l);
    return 0;
}