class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
        // code here
        stack<int>st;
        for(int i=0;i<arr.size();i++){
            if(!st.empty() && (st.top()>=0 && arr[i]<0 || st.top()<0 && arr[i]>=0)){
                st.pop();
            }else{
                st.push(arr[i]);
            }
        }
        vector<int> ans(st.size());
        for(int i = st.size()-1; i >= 0; i--) {
            ans[i] = st.top();
            st.pop();
        }
        return ans;
    }  
};