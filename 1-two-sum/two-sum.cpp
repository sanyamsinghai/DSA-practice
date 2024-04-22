class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      //vector<int>v;
      //   for(int i=0;i<nums.size();i++){
      //     for(int j=i+1;j<nums.size();j++){
      //         if(nums[i]+nums[j]==target){
      //             v.push_back(i);
      //             v.push_back(j);
      //             return v;
      //         }
      //     }
      // }
      //  return {}; 

        unordered_map<int,int>mapp;
        for(int i=0 ; i<nums.size() ; i++){
            int a=nums[i];
            int more=target-a;
            if(mapp.find(more)!=mapp.end()){
                return{mapp[more],i};
            }
            mapp[a]=i;
        }
        return{-1,-1};

    }
};