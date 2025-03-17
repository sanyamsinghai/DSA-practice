class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int, int> mapp;

        for (int i = 0; i < nums.size(); i++) {
            mapp[nums[i]]++;
        }

        for (auto it : mapp) {
            if (it.second % 2 != 0) {
                return false;
            }
        }
        return true;
    }
};