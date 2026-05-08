#include <iostream>
#include <vector>
using namespace std;

vector<int> add(vector<int> &A, vector<int> &B) {
    vector<int> C;
    int t = 0;
    
    for (int i = 0; i < A.size() || i < B.size() || t > 0; i++) {
        if (i < A.size()) t += A[i];
        if (i < B.size()) t += B[i];
        
        C.push_back(t % 10);
        t /= 10;
    }
    return C;
}

vector<int> mul(vector<int> &A, int b) {
    vector<int> C;
    int t = 0;
    
    for (int i = 0; i < A.size() || t > 0; i++) {
        if (i < A.size()) t += A[i] * b;
        
        C.push_back(t % 10);
        t /= 10;
    }
    return C;
}

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    vector<int> sum = {0};
    vector<int> fact = {1};

    for (int i = 1; i <= n; i++) {
        fact = mul(fact, i);
        sum = add(sum, fact);
    }

    for (int i = sum.size() - 1; i >= 0; i--) {
        printf("%d", sum[i]);
    }
    printf("\n");

    return 0;
}