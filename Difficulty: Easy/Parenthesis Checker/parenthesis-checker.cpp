//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    bool ispar(string s) {
        // code here
        stack<char> st;
        for (int i = 0; i < s.length(); i++) {

            if (s[i] == '(' || s[i] == '[' || s[i] == '{'){
                st.push(s[i]);
            }

            else {
                if (st.empty()) {
                    return false;
                }

                char ch = st.top();
                st.pop();
                
                if ((s[i] == ')' && ch == '(') || (s[i] == ']' && ch == '[') ||
                    (s[i] == '}' && ch == '{')){
                        continue;
                    } 
                
                else{
                    return false;
                }
            }
        }
        return st.empty();
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    string a;
    cin >> t;
    while (t--) {
        cin >> a;
        Solution obj;
        if (obj.ispar(a))
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
}
// } Driver Code Ends