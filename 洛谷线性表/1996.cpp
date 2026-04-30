#include<iostream>
#include<queue>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n, m;
    cin >> n >> m;
    
    queue<int> l;
    for(int i = 0; i < n; i++)
    {
        l.push(i + 1);
    }
    
    int order = 1;
    while(!l.empty())
    {
        int the = l.front();
        l.pop();
        
        if(order == m)
        {
            cout << the << ' ';
            order = 1;
        }
        else
        {
            order++;
            l.push(the);
        }
    }
    return 0;
}