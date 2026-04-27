#include<iostream>
#include<vector>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int studentnum,questionnum;
    cin>>studentnum>>questionnum;
    vector<int>students(studentnum);
    for(int i=0;i<studentnum;i++)
    {
        cin>>students[i];
    }
    for(int i=0;i<questionnum;i++)
    {
        int index;
        cin>>index;
        cout<<students[index-1]<<'\n';
    }
    return 0;
}