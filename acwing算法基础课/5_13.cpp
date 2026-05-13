//双指针，位运算，离散化，区间合并
#include<vector>
#include<algorithm>
#include <iostream>
using namespace std;
vector<int>alls;
sorted(alls.begin(),alls.end());
alls.erase(unique(alls.begin(),alls.end()),alls.end());
int find()
{
    int l=-1;
    int right=alls.size();
    while(l+1<r)
    {
        int mid=l+r>>1;
        if(alls[mid]<x)l=mid;
        else r=mid;
    }
    return r+1;
}