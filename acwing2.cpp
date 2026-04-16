#include <iostream>
using namespace std;
// class Person
// {
//     private:
//     int age,heignt;
//     double money;
//     string books[100];

//     public:
//     string name;
//     void say()
//     {
//         cout<<"my name is "<<name<<endl;
//     }
//     int get_age()
//     {
//         return age;
//     }
//     void add_money(double x)
//     {
//         money+=x;
//     }
// };

struct Person
{
    string name;
    int age;
    double money;
    Person(string name,int age,double money):name(name),age(age),money(money){}//构造函数，可直接赋值
    //类也有这种写法，并且可以定义private成员变量，构造函数也可以写在类里，private只能类内访问，struct则可以在外部访问
};
int main()
{
    // Person c;
    // c.name="acwing";
    // cout<<c.get_age()<<endl;
    // c.add_money(100);
    Person c("acwing",100,1000.1);
    cout<<c.name<<" "<<c.age<<" "<<c.money<<endl;
    return 0;
}