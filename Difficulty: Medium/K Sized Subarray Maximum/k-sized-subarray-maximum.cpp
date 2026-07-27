class Solution {
  public:
    vector<int> maxOfSubarrays(vector<int>& arr, int k) {
        // code here
        deque<int> dq;
        vector<int> ans;
        for (int i = 0; i < arr.size(); i++) {
            if (!dq.empty() && dq.front() <= i - k) {
                dq.pop_front();
            }
    
            while (!dq.empty() && arr[dq.back()] <= arr[i]) {
                dq.pop_back();
            }
    
            dq.push_back(i);
        
            if (i >= k - 1) {
                ans.push_back(arr[dq.front()]);
            }
        }
        return ans;
    }
};
    
    // if(k==1) return arr;
        
        // vector<int> ans;
        // for(int i=0;i<arr.size()-k+1;i++){
        //     int left = i;
        //     int right = i;
        //     int maxi = INT_MIN;
        //     while(right<left+k){
        //         maxi = max(maxi,arr[right]);
        //         right+=1;
        //     }
        //     ans.push_back(maxi);
        // }
        // return ans;