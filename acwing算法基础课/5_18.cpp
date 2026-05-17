#include <iostream>
using namespace std;
const int N=100010;

int e[N],l[N],r[N],idx;
//让0为head1为end
//idx当前已经用到的某个点
void init()
{
    r[0]=1;
    l[1]=0;
    idx=2;
}
void add_rignt(int k,int x)
{
    e[idx]=x;
    l[idx]=k;
    r[idx]=r[k];
    l[r[k]]=idx;
    r[k]=idx;
    idx++;
}
void remove(int k)
{
    r[l[k]]=r[k];
    l[r[k]]=l[k];
}
int main()
{
    //链表 单链表：邻接表（图和树） 双链表：优化某些问题
    void init();
    return 0;
}