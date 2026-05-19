#include<iostream>
using namespace std;
int main()
{
    unsigned int n;
    scanf("%u",&n);
    unsigned int ans=(n>>16)|(n<<16);
    printf("%u",ans);
    return 0;
}