#include<iostream>
#include<vector>
using namespace std;

int N, M, C;

int main()
{
    if(scanf("%d%d%d", &N, &M, &C) != 3) return 1; 
    
    vector<vector<long long>> sum(N + 1, vector<long long>(M + 1, 0));
    
    for(int i = 1; i <= N; i++)
    {
        for(int j = 1; j <= M; j++)
        {
            long long tmp;
            if(scanf("%lld", &tmp) != 1) return 2; 
            sum[i][j] = sum[i][j-1] + sum[i-1][j] - sum[i-1][j-1] + tmp;
        }
    }
    
    long long judge = -4e18; 
    int ans_x = 1;
    int ans_y = 1;
    
    for(int i = 1; i <= N - C + 1; i++)
    {
        for(int j = 1; j <= M - C + 1; j++)
        {
            int x = i + C - 1;
            int y = j + C - 1;
            
            long long tmp = sum[x][y] - sum[i-1][y] - sum[x][j-1] + sum[i-1][j-1];
            
            if(tmp > judge)
            {
                judge = tmp;
                ans_x = i; 
                ans_y = j;
            }
        }
    }
    
    printf("%d %d\n", ans_x, ans_y); 
    
    return 0;
}