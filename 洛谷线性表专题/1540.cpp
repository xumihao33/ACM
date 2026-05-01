#include<iostream>
#include <queue>
using namespace std;
bool judge[1000000];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int m,n;
    if(!(cin >> m >> n)) return 1;

    queue<int> q;
    int finding=0;
    for(int i =0; i < n; i++)
    {
        int word;
        cin >> word;
        if(!judge[word])
        {
            finding++;
            judge[word] = true;
            q.push(word);
            if(q.size()>m)
            {
                int memory = q.front();
                judge[memory] = false;
                q.pop();
            }
        }
    }
    cout << finding;
    cout<<'\n';
    return 0;
}