class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
       unordered_set<int>ans;
       for(int i=0 ; i<nums.size() ; i++){
        ans.insert(nums[i]);
        int ld=0;
        int rev=0;
        int temp=nums[i];

        while(temp>0){
            ld=temp%10;
            temp=temp/10;
            rev=rev*10 + ld;
        }
        ans.insert(rev);
       }
       return ans.size();
    }
};