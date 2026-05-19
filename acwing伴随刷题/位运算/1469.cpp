#include<iostream>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        int tmp;
        scanf("%d",&tmp);
        ans^=tmp;
    }
    printf("%d",ans);
    return 0;
}