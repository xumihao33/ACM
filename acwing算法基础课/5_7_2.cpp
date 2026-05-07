#include<iostream>
using namespace std;
int main()
{
    int n;
    int a[2]; int s[1];
    //前缀和可升级为二维前缀和
    for(int i=1;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    s[0]=a[0]=0;
    for(int i=1;i<n;i++)
    {
        s[i]=s[i-1]+a[i];
    }

    return 0;
}