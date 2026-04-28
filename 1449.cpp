#include <iostream>
#include <algorithm>
#include <stack>
#include <string>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s;
    cin >> s;

    int num = 0;
    stack<int> n; 

    for(char c : s) 
    {
        if(c >= '0' && c <= '9') 
        {
            num = num * 10 + c - '0';
        } 
        else if(c == '.') 
        {
            n.push(num);
            num = 0;
        } 
        else if(c == '@') 
        {
            break;
        } 
        else 
        {
            int first = n.top(); 
            n.pop();
            int second = n.top();
            n.pop();
            
            if(c == '+') 
            {
                n.push(first + second);
            } 
            else if(c == '-') 
            {
                n.push(second - first); 
            } 
            else if(c == '*') 
            {
                n.push(first * second);
            } 
            else 
            {
                n.push(second / first);
            }
        }
    }
    
    cout << n.top() << '\n'; 
    return 0;
}