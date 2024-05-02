class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_set<int>sett(nums.begin(),nums.end());

        int ans=-1;

        for(auto it : sett){
            if(sett.find(-it)!=sett.end())
            ans=max(ans,it);
        }
        return ans;
    }
};