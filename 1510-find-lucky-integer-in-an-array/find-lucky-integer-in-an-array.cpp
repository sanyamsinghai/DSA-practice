class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> mapp;
        for (auto it : arr) {
            mapp[it]++;
        }
        int maxi = -1;
        for (auto it : mapp) {
            if (it.second == it.first) {
                maxi = max(maxi, it.first);
            }
        }
        return maxi;
    }
};