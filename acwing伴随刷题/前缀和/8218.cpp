#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    vector<int>a(n+1,0);
    for(int i=1;i<n+1;i++)
    {
        int tmp;
        scanf("%d",&tmp);
        a[i]=a[i-1]+tmp;
    }
    int m;
    scanf("%d",&m);
    while(m--)
    {
        int l,r;
        scanf("%d %d",&l,&r);
        printf("%d\n",a[r]-a[l-1]);
    }
    return 0;
}