#include <iostream>
using namespace std;

const int N = 100010;
int a[N], d[N];

// 核心插入函数
void insert(int l, int r, int c) {
    d[l] += c;
    d[r + 1] -= c;
}

int main() {
    int n, m; // n个数字，m次操作
    cin >> n >> m;
    
    // 读取原数组，并同时构建初始的差分数组
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        insert(i, i, a[i]); // 极其巧妙：把初始化也看作是对区间 [i, i] 加上 a[i]
    }
    
    // 执行 m 次区间修改操作
    while (m--) {
        int l, r, c;
        cin >> l >> r >> c;
        insert(l, r, c); // O(1) 修改
    }
    
    // 最后求一遍差分数组的前缀和，还原出真实数组
    for (int i = 1; i <= n; i++) {
        d[i] += d[i - 1]; // d 现在变成了自己的前缀和（也就是修改后的 a）
        cout << d[i] << " ";
    }
    
    return 0;
}