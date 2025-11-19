class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        /*
        set<int> sett(nums.begin(),nums.end());

        for(auto it:sett){
            if(it==original){
                original=original*2;
            }
        }
        return original;
        */

        //approach 2 - using unordered set

        unordered_set<int> sett(nums.begin(),nums.end());
        while(sett.count(original)){
            original*=2;
        }
        return original;
    }
};