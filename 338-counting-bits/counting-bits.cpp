class Solution {
public:

    int countSetBits(int n){
        int cnt=0;
        while(n>1){
            if(n%2==1){
                cnt++;
            }
            n=n/2;
        }
        if(n==1){
            cnt++;
        }
        return cnt;
    }

    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i=0 ; i<=n;i++){
            ans.push_back(countSetBits(i));
        }
        return ans;
    }
};