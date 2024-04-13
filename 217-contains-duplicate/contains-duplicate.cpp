class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<long long int,int>mapp;

        for(int i:nums){
            mapp[i]++;
        }
        for(auto it:mapp){
            if(it.second>1){   //checking if frequency of any element is greater than 1 or not
                return true;
            }
        }
        return false;
    }
};