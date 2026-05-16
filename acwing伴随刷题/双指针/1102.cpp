#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    long long c;
    if (scanf("%d%lld", &n, &c) != 2) return 0;

    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        scanf("%lld", &a[i]);
    }

    sort(a.begin(), a.end());

    long long ans = 0; 
    
    for (int i = 0; i < n; i++) {
        long long target = a[i] + c;
        
        auto l = lower_bound(a.begin(), a.end(), target);
        auto r = upper_bound(a.begin(), a.end(), target);
        
        ans += (r - l);
    }

    printf("%lld\n", ans);

    return 0;
}