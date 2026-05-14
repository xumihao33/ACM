#include <cstdio>
#include <cstring>
using namespace std;

const int MAX = 1000005; 
int rent[MAX];              
int D[MAX], S[MAX], T[MAX]; 
long long diff[MAX];     

int n, m;

bool check(int mid) {
    memset(diff, 0, sizeof(diff)); 
    
    for (int i = 1; i <= mid; i++) {
        diff[S[i]] += D[i];
        diff[T[i] + 1] -= D[i]; 
    }
    
    long long current_need = 0;
    for (int i = 1; i <= n; i++) {
        current_need += diff[i]; 
        
        if (current_need > rent[i]) {
            return false; 
        }
    }
    return true;
}

int main() {
    if (scanf("%d%d", &n, &m) != 2) return 0;
    
    for (int i = 1; i <= n; i++) {
        scanf("%d", &rent[i]);
    }
    for (int i = 1; i <= m; i++) {
        scanf("%d%d%d", &D[i], &S[i], &T[i]);
    }
    
    if (check(m)) {
        printf("0\n");
        return 0;
    }
    
    int left = 1, right = m;
    int ans = 0; 
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (check(mid)) {
            left = mid + 1;
        } else {
            ans = mid;         
            right = mid - 1;   
        }
    }
    
    printf("-1\n%d\n", ans);
    return 0;
}