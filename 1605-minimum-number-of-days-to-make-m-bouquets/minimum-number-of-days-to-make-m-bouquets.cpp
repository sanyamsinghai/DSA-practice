class Solution {
public:

    bool possible(vector<int>& bloomDay, int day, int m, int k){
        int cnt=0;
        int B=0;
        for(int i=0 ; i<bloomDay.size() ; i++){
            if(bloomDay[i]<=day){
                cnt++;
            }
            else{
                B+=cnt/k;
                cnt=0;
            }
        }
        B+=cnt/k;

        return B>=m; 
    } 

    int minDays(vector<int>& bloomDay, int m, int k) {
        int low=*min_element(bloomDay.begin(),bloomDay.end());
        int high=*max_element(bloomDay.begin(),bloomDay.end());
        int ans=high;

        long long val=m * 1ll * k * 1ll;

        if(bloomDay.size()<val){
            return -1;
        }

        while(low<=high){
            int mid=low+(high-low)/2;
            if(possible(bloomDay,mid,m,k)){
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