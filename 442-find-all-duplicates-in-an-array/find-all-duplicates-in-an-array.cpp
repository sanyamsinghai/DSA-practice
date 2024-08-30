class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int,int> mapp;
        vector<int> ans;
        for(int i:nums){
            mapp[i]++;
        }
        for(auto it:mapp){
            if(it.second==2){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};