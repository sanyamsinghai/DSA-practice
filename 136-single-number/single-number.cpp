class Solution {
public:
    int singleNumber(vector<int>& nums) {

        //using map 
        // unordered_map<long long int,int>map;

        // for(int i:nums){
        //     map[i]++;
        // }      

        // for(auto it:map){
        //     if(it.second==1){
        //         return it.first;
        //     }
        // }
        // return -1;

        //using xor

        int ans=0;
        for(int i=0 ; i<nums.size() ; i++){
            ans=ans^nums[i];
        }
        return ans;
    }
};