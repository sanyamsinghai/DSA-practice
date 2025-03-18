class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> mapp;
        for (int i : arr) {
            mapp[i]++;
        }
        unordered_set<int> sett;
        for (auto it : mapp) {
            sett.insert(it.second);
        }
        if (sett.size() != mapp.size())
            return false;
        return true;
    }
};