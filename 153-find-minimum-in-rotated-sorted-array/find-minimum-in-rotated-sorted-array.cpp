class Solution {
public:
    int findMin(vector<int>& nums) {
        int low=0;
        int high=nums.size()-1;
        int mini=INT_MAX;

        while(low<=high){
            int mid=low+(high-low)/2;

            //if left part sorted
            if(nums[low]<=nums[mid]){
                mini=min(mini,nums[low]);
                low=mid+1; // eliminate left part
            }

            else{ //right part sorted
                mini=min(mini,nums[mid]);
                high=mid-1; //eliminate right part
            }
        }
        return mini;
    }
};