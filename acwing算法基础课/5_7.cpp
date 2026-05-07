#include<iostream>
#include<vector>
using namespace std;
vector<int>mul(vector<int>&A,int b)
{
    vector<int>c;
    int t=0;
    for(int i=0;i<A.size();i++)
    {
        if(i<A.size())t+=A[i]*b;
        c.push_back(t%10);
        t/=10;
    }
    return c;
}
int main()
{
    //高精度乘法
    string a;
    vector<int> A;
    int b;
    if (!(cin >> a >> b)) return 0;
    
    for (int i = a.size() - 1; i >= 0; i--) A.push_back(a[i] - '0');
    auto C=mul(A,b);
    for(int i=C.size()-1;i>=0;i--)printf("%d",C[i]);
    return 0;
}