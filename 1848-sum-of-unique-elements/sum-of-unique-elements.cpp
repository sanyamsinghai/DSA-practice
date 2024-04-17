class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int sum=0;
        unordered_map<int,int>mapp;

        for(int i:nums){
            mapp[i]++;
        }

        for(auto it:mapp){
            if(it.second==1){
                sum+=it.first;
            }
        }

        return sum;
    }
};