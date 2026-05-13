#include <iostream>
#include <vector>
using namespace std;

const int N = 1005;
int diff[N][N];

int main() {
    int n, m;
    
    scanf("%d%d", &n, &m);
    while (m--) {
        int x1, y1, x2, y2;
        scanf("%d%d%d%d", &x1, &y1, &x2, &y2); 
        
        diff[x1][y1] += 1;
        diff[x1][y2+1] -= 1;
        diff[x2+1][y1] -= 1;
        diff[x2+1][y2+1] += 1;
    }
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            diff[i][j] += diff[i-1][j] + diff[i][j-1] - diff[i-1][j-1];
            cout << diff[i][j] << (j == n ? "" : " "); 
        }
        printf("\n");
    }
    
    return 0;
}