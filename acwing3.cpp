#include <iostream>
using namespace std;
int main ()
{
    int a=1;
    cout<<(void*)&a<<endl;//打印地址更安全,并16进制显示
    cout<<&a<<endl;//也可以直接打印地址，但可能会被当成字符串输出，10进制显示
    int s[]={1,2,3,4,5};
    cout<<(void*)s<<endl;
    cout<<&s[0]<<endl;
    cout<<&s[1]<<endl;//数组名就是数组首地址
    //数组名就是数组首地址

    int&p=a;//引用，给a起了个别名p，p和a是同一个变量
    cout<<p<<endl;
    p=2;//通过引用修改变量的值
    cout<<a<<endl;//a的值也被修改了
    cout<<&p<<endl;//引用的地址和被引用变量的地址是一样的
    cout<<&a<<endl;//a的地址
    return 0;
}