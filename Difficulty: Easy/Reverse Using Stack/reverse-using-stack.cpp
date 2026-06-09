class Solution {
  public:
    string reverse(const string& S) {
        // code here
        stack<char>st;
        string ans = "";
        for(int i=0;i<S.length();i++){
            st.push(S[i]);
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};