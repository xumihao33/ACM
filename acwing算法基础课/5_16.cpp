#include <iostream>
using namespace std;
const int N=100010;

int head,e[N],ne[N],idx;
//head头节点下标，e[i]节点i的值，ne[i]节点i的下一个的下标
//idx当前已经用到的某个点
void init()
{
    head=-1;
    idx=0;
}
void add_head(int x)
{
    e[idx]=x;
    ne[idx]=head;
    head=idx;
    idx++;
}
void add_k_after(int k,int x)
{
    e[idx]=x;
    ne[idx]=ne[k];
    ne[k]=idx;
    idx++;
}
void remove(int k)
{
    ne[k]=ne[ne[k]];
}
int main()
{
    //链表 单链表：邻接表（图和树） 双链表：优化某些问题
    void init();
    return 0;
}