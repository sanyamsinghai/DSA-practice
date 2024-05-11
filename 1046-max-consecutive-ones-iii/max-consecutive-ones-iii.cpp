class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
    int start=0;
    int end=0;
    int max_length=0;
    int zero_count=0;

    for( ; end<nums.size() ; end++){
        
        if(nums[end]==0){
            zero_count++;
        }
        
        while(zero_count>k){
            if(nums[start]==0)zero_count--;
            start++;
        }
        max_length=max(max_length,end-start+1);
    }
    return max_length;
    }
};