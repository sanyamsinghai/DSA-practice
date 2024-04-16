class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>mapp;

        for(int i:nums){
            mapp[i]++;
        }
        for(auto it:mapp){
            if(it.second>1){
                return it.first;
            }
        }
        return {};
    }
};