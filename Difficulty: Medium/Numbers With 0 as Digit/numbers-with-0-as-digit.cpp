class Solution {
  public:
    int countZero(int n) {
        // Code here
        if(n<10)return 0;
        
        int cnt=0;
        for(int i=10;i<=n;i++){
            int temp=i;
            bool flag=false;
            while(temp){
                if(temp%10==0){
                    flag=true;
                    break;
                }
                temp=temp/10;
            }
            if(flag)cnt++;
        }
        return cnt;
    }
};