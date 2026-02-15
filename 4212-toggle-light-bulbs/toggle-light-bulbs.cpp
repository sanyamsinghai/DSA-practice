class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        vector<int> freq(101, 0);
        vector<int> ans;

        for (int i = 0; i < bulbs.size(); i++) {
            freq[bulbs[i]]++;
        }
        for (int j = 0; j < freq.size(); j++) {
            if (freq[j] % 2 == 1) {
                ans.push_back(j);
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};