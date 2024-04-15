class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
        set<int>sett(nums1.begin(),nums1.end());

        for(auto it:nums2){
            if(sett.find(it)!=sett.end()){
                v.push_back(it);
                sett.erase(it);
            }
        }
        return v;
    }
};