class Solution {
public:

    bool isPossible(vector<int>& nums, int mid,int k){
        int last=0;
        int cntSubArray=1;

        for(int i=0 ; i<nums.size() ; i++){
            if(nums[i]+last<=mid){
                last+=nums[i];
            }
            else{
                cntSubArray++;
                last=nums[i];
            }
            if(cntSubArray>k){
                return false;
            }
        }
        return true;
    }

    int splitArray(vector<int>& nums, int k) {
        int low=*max_element(nums.begin(),nums.end());
        int high=accumulate(nums.begin(),nums.end(),0);

        while(low<=high){
            int mid=low+(high-low)/2;

            if(isPossible(nums,mid,k)){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};