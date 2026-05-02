#include<iostream>
using namespace std;
//快速排序改写
int a[5000005]; 

int quick_select(int l, int r, int k)
{
    if(l >= r) return a[l];
    
    int i = l - 1, j = r + 1;
    int mid_val = a[l + r >> 1]; 
    
    while(i < j)
    {
        do i++; while(a[i] < mid_val);
        do j--; while(a[j] > mid_val);
        if(i < j) swap(a[i], a[j]);
    }
    if(k <= j) return quick_select(l, j, k);
    else return quick_select(j + 1, r, k);
}

int main()
{
    int n, k;
    scanf("%d%d", &n, &k);
    
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("%d", quick_select(0, n - 1, k));
    return 0;
}