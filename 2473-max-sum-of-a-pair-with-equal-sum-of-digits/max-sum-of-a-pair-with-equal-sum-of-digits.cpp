class Solution {
public:
    int checkSumOfDigit(int n) {
        int sum = 0;
        while (n != 0) {
            int rem = n % 10;
            sum += rem;
            n = n / 10;
        }
        return sum;
    }

    int maximumSum(vector<int>& nums) {

        unordered_map<int, int> mapp;
        int maxSum = -1;
        for (int i = 0; i < nums.size(); i++) {
            int checkSum = checkSumOfDigit(nums[i]);
            if (mapp.find(checkSum) != mapp.end()) {
                maxSum = max(maxSum, mapp[checkSum] + nums[i]);
            }
            mapp[checkSum] = max(mapp[checkSum], nums[i]);
        }
        return maxSum;

        // int maxSum=-1;
        // vector<int> ans;
        // int sum=0;
        // for(int i=0;i<nums.size();i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         if(checkSumOfDigit(nums[i])==checkSumOfDigit(nums[j])){
        //             sum=nums[i]+nums[j];
        //             ans.push_back(sum);
        //         }
        //     }
        // }

        // for(int i=0;i<ans.size();i++){
        //     maxSum=max(maxSum,ans[i]);
        // }
        // return maxSum;
    }
};