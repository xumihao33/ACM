#include<iostream>
using namespace std;
const int N = 1000000;
int Left[N];
int Right[N];
bool deleted[N];
void insert_right(int who, int what)
{
    Left[what] = who;
    Right[what] = Right[who];
    Left[Right[who]] = what;
    Right[who] = what;
}
int main ()
{
    ios::sync_with_stdio;
    cin.tie(0);

    int n;
    if(!(cin >> n)) return 1;
    Right[0] = 1;
    Left[1] = 0;
    Right[1] = 0;
    for(int i = 2; i <= n; i++)
    {
        int k,p;
        if(!(cin >> k >> p)) return 1;
        if(p==0)
        {
            insert_right(Left[k], i);
        }
        else
        {
            insert_right(k, i);
        }
    }
    int m;
    if(!(cin >> m)) return 1;
    while(m--)
    {
        int k;
        if(!(cin >> k)) return 1;
        if(!deleted[k])
        {
            deleted[k] = true;
            Right[Left[k]] = Right[k];
            Left[Right[k]] = Left[k];
        }
    }
    for(int i = Right[0]; i != 0; i = Right[i])
    {
        cout << i << ' ';
    }
    cout << '\n';
    return 0;
}