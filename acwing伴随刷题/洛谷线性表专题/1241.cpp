#include <iostream>
#include <string>
#include <stack>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s;
    if(!(cin >> s)) return 1;

    stack<int> st; 
    vector<bool> judge(s.size(), false);

    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '(' || s[i] == '[')
        {
            st.push(i);
        }
        else
        {
            if(!(st.empty()))
            {
                int last_index = st.top(); 
                
                if((s[last_index] == '(' && s[i] == ')') || (s[last_index] == '[' && s[i] == ']'))
                {
                    judge[i] = judge[last_index] = true;
                    st.pop();
                }
            }
        }
    }
    
    for(int i = 0; i < s.size(); i++)
    {
        if(judge[i] == true)
        {
            cout << s[i]; 
        }
        else
        {
            if(s[i] == '(' || s[i] == ')')
            {
                cout << "()"; 
            }
            else
            {
                cout << "[]"; 
            }
        }
    }
    cout << '\n';
    return 0;
}