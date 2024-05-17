class Solution {
public:

    int divisor(vector<int>& nums,int div){
        int val=0;
        for(int i=0 ; i<nums.size() ; i++){
            val+=ceil((double)nums[i]/(double)div);
        }
        return val;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1;
        int high=*max_element(nums.begin(),nums.end());
        int ans=0;

        while(low<=high){
            int mid=low+(high-low)/2;

            if(divisor(nums,mid)<=threshold){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};