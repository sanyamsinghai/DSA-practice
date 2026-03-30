class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos;
        vector<int> neg;

        int i = 0;

        while (i < nums.size()) {
            if (nums[i] > 0) {
                pos.push_back(nums[i]);
                i++;
            } else {
                neg.push_back(nums[i]);
                i++;
            }
        }

        int k = 0;
        int j = 0;
        vector<int> ans;

        while (k < pos.size() && j < neg.size()) {
            ans.push_back(pos[k]);
            ans.push_back(neg[j]);
            k++;
            j++;
        }
        return ans;
        while (k < pos.size()) {
            ans.push_back(pos[k]);
            k++;
        }
        while (j < pos.size()) {
            ans.push_back(pos[j]);
            j++;
        }
    }
};