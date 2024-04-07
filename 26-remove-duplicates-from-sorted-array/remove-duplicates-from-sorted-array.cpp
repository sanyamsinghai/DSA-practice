class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // int id=0;
        // if(nums.size()==0)return 0;
        // for(int i=1;i<nums.size();i++){
        //     if(nums[i]!=nums[id]){
        //         nums[++id]=nums[i];
                
        //     }
        // }
        // return id+1;

        int i=0;
        for(int j=1;j<nums.size();j++){
            if(nums[j]!=nums[i]){
                nums[i+1]=nums[j];
                i++;
            }
        }
        return i+1;
    }
};