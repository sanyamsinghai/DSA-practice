class Solution {
public:
    int findGCD(vector<int>& nums) {
        int maxi=INT_MIN;
        int mini=INT_MAX;

        for(int i=0;i<nums.size();i++){
            maxi=max(maxi,nums[i]);
            mini=min(mini,nums[i]);
        }

        int gcd=1;

        for(int i=2;i<=maxi;i++){
            if(mini%i==0 && maxi%i==0){
                gcd=max(gcd,i);
            }
        }

        return gcd;
    }
};