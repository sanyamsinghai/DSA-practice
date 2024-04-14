class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mapp;
        int n=nums.size();

        for(int i:nums){
            mapp[i]++;
        }
        for(auto it:mapp){
            if(it.second>n/2){
                return it.first;
            }
        }
        return {};
    }
};