class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        int ans = 0;
        for (int i = 0; i < operations.size(); i++) {
            if (operations[i] == "C") {
                ans -= st.top();
                st.pop();
            } else if (operations[i] == "D") {
                int val = 2 * st.top();
                ans += val;
                st.push(val);
            } else if (operations[i] == "+") {
                int first = st.top();
                st.pop();

                int second = st.top();
                st.push(first);

                int val = first + second;
                ans += val;
                st.push(val);
            } else {
                int val = stoi(operations[i]);
                ans += val;
                st.push(val);
            }
        }
        return ans;
    }
};