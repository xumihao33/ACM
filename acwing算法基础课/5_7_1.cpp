#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int>div(vector<int>&A,int b,int&r)
{
    vector<int>c;
    r=0;
    for(int i=A.size()-1;i>=0;i--)
    {
        r=r*10+A[i];
        c.push_back(r/b);
        r%=b;
    }
    reverse(c.begin(),c.end());
    return c;
}
int main()
{
    //高精度除法
    string a;
    vector<int> A;
    int b;
    if (!(cin >> a >> b)) return 0;
    
    for (int i = a.size() - 1; i >= 0; i--) A.push_back(a[i] - '0');
    int r;

    auto C=div(A,b,r);
    for(int i=C.size()-1;i>=0;i--)printf("%d",C[i]);
    cout<<endl<<r<<endl;

    return 0;
}