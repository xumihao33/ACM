#include<iostream>
#include<vector>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,q;
    cin>>n>>q;
    vector<vector<int>> bank(n+1);
    for(int p=0;p<q;p++)
    {
       int judge;
       cin>>judge;
       if(judge==1)
       {
        int i,j,k;
        cin>>i>>j>>k;
        if(bank[i].size()<j)
        {
            bank[i].resize(j+1);
        }
        bank[i][j]=k;
       }
       else if(judge==2)
       {
        int i,j;
        cin>>i>>j;
        cout<<bank[i][j]<<'\n';
       }
    }
    return 0;
}