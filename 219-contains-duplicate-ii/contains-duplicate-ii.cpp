class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int i = 0;
        unordered_map<int, int> map;
        for (int j = 0; j < nums.size(); j++) {
            map[nums[j]]++;

            if (map[nums[j]] > 1) {
                return true;
            }
            if (j - i >= k) {
                map[nums[i]]--;
                i++;
            }
        }
        return false;
    }
};