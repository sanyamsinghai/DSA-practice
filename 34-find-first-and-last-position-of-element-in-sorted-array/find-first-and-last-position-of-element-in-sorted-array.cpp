class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = -1;
        int last = -1;
        vector<int> ans;

        // first occurrence
        int low = 0;
        int high = nums.size() - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target) {
                first = mid;
                high =mid -1; // beacuse we want first occurrence so we search in left;
            } 
            else if (nums[mid] < target) {
                low = mid + 1;
            } 
            else {
                high = mid - 1;
            }
        }
        if(first==-1){
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;
        }
        ans.push_back(first);

        // last occurrence
        low = 0;
        high = nums.size() - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target) {
                last = mid;
                low =mid + 1; // beacuse we want last occurrence so we search in right;
            } 
            else if (nums[mid] < target) {
                low = mid + 1;
            } 
            else {
                high = mid - 1;
            }
        }
        ans.push_back(last);

        return ans;
    }
};