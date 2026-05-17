#include<iostream>
using namespace std;
int main()
{
    int M;
    scanf("%d",&M);
    int l=1,r=2;
    long long sum=3;

    while(l<r&&r<=(M/2+1))
    {
        if(sum==M)
        {
            printf("%d %d\n",l,r);
            sum-=l;
            l++;
        }
        else if(sum<M)
        {
            r++;
            sum+=r;
        }
        else
        {
            sum-=l;
            l++;
        }
    }
    return 0;
}