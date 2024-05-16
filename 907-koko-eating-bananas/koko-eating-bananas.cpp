class Solution {
public:

    int maximum(vector<int>& piles){
        int maxi=INT_MIN;
        for(int i=0 ; i<piles.size() ; i++){
            maxi=max(maxi,piles[i]);
        }
        return maxi;
    }

    long long calculateHours(vector<int>& piles,int hourly){
        long long totalH=0;
        for(int i=0 ; i<piles.size() ; i++){
            totalH+=ceil((double)piles[i]/(double)hourly);
        }
        return totalH;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=maximum(piles);
        int ans=0;

        while(low<=high){
            long long mid=low+(high-low)/2;

            long long totalH=calculateHours(piles,mid);
            if(totalH<=h){
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