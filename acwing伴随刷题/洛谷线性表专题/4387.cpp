#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int q;
    if (cin >> q) {
        while (q--) {
            int n;
            cin >> n;
            
            vector<int> pushed(n);
            vector<int> popped(n);
            
            for (int i = 0; i < n; i++) cin >> pushed[i];
            for (int i = 0; i < n; i++) cin >> popped[i];

            stack<int> st;
            int pop_idx = 0;

            for (int i = 0; i < n; i++) {
                st.push(pushed[i]);
                
                while (!st.empty() && st.top() == popped[pop_idx]) {
                    st.pop();
                    pop_idx++;
                }
            }

            if (st.empty()) {
                cout << "Yes\n";
            } else {
                cout << "No\n";
            }
        }
    }
    return 0;
}