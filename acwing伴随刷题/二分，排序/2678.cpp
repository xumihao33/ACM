#include<iostream>
using namespace std;

int a[50005];
int L, N, M;

bool check(int mid)
{
    int cnt = 0;
    int last_index = 0; 
    for(int i = 0; i <= N; i++)
    {
        if(a[i] - last_index < mid)
        {
            cnt++;
        }
        else
        {
            last_index = a[i]; 
        }
    } 
    return cnt <= M; 
}

int main()
{
    scanf("%d%d%d", &L, &N, &M);
    for(int i = 0; i < N; i++)
    {
        scanf("%d", &a[i]); 
    }
    
    a[N] = L; 
    
    int l = 0; 
    int r = L + 1;
    
    while(l + 1 < r)
    {
        int mid = l + (r - l) / 2;
        if(check(mid)) 
            l = mid; 
        else 
            r = mid;
    }
    
    printf("%d", l); 
    
    return 0;
}