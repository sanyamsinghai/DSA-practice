class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mapp;

        for (int i = 0; i < nums.size(); i++) {
            int more = target - nums[i];
            if (mapp.find(more) != mapp.end()) {
                return {mapp[more], i};
            }
            mapp[nums[i]] = i;
        }
        return {-1, -1};
    }
};