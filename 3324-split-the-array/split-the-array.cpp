class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        int n=nums.size();
        vector<int> freq(101,0);
        
        
        for(int i=0 ; i<n ; i++)
            {
            freq[nums[i]]++;
        }
        for(int i=0 ; i<101 ; i++){
            if(freq[i]>2){
                return false;
            }
        }
        return true;
    }
};