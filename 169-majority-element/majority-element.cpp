class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // unordered_map<int,int>mapp;
        // int n=nums.size();

        // for(int i:nums){
        //     mapp[i]++;
        // }
        // for(auto it:mapp){
        //     if(it.second>n/2){
        //         return it.first;
        //     }
        // }
        // return {};


//moore voting algorithm
        int count=0;
        int el=nums[0];
        
        for(int i=0 ; i<nums.size() ; i++){
            if(count==0){
                count=1;
                el=nums[i];
            }
            else if(nums[i]==el){
                count++;
            }
            else{
                count--;
            }
        }

        int cnt=0;
        for(int i=0 ; i<nums.size() ; i++){
            if(nums[i]==el){
                cnt++;
            }
        }
        if(cnt>nums.size()/2){
            return el;
        }
        return {};

    }
};