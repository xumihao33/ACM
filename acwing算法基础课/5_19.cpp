//单调栈
#include<iostream>
using namespace std;
const int N=100010;
int stk[N],tt;
int n;
int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
       int x;
       scanf("%d",&x);
       while(tt&&stk[tt]>x)tt--;
       if(tt)printf("%d",stk[tt]);
       else printf("-1");
       stk[++tt]=x;
    }
    return 0;
}