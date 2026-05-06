class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
        
        if(arr.size()==0){
            return 0;
        }
        
        sort(arr.begin(), arr.end());
        int max_len = 1;

        int len = 1;
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] > arr[i - 1] && arr[i] == arr[i - 1] + 1) {
                len++;
                max_len = max(max_len, len);
            } else if (arr[i] == arr[i - 1]) {
                continue;
            } else {
                len = 1;
            }
        }
        return max_len;
    }
};