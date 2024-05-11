class Solution {
public:
    int search(vector<int>& nums, int target) {
        // for(int i=0 ;i<nums.size() ; i++){
        //     if(nums[i]==target){
        //         return i;
        //     }
        // }
        // return -1;

        int st=0;
        int end=nums.size()-1;

        while(st<=end){

            int mid=st+(end-st)/2;

            if(nums[mid]==target){
                return mid;
            }

            else if(nums[mid]<target){
                st=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return -1;
    }
};