#include<iostream>
using namespace std;

int L, N, K;
int a[100005];

bool check(int mid) {
    int cnt = 0;
    for(int i = 1; i < N; i++) {
        int gap = a[i] - a[i - 1];
        if(gap > mid) {
            cnt += (gap - 1) / mid;
        }
    }
    return cnt <= K;
}

int main() {
    scanf("%d%d%d", &L, &N, &K);
    for(int i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }
    
    int l = 0;
    int r = L;
    
    while(l + 1 < r) {
        int mid = l + (r - l) / 2;
        if(check(mid)) {
            r = mid;
        } else {
            l = mid;
        }
    }
    
    printf("%d\n", r);
    return 0;
}