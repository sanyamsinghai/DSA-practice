//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
  
    bool check4(int n){
        int cnt=0;
        while(n!=0){
            int rem=n%10;
            if(rem==4){
                cnt++;
            }
            n=n/10;
        }
        if(cnt==0) return false;
        return true;
    }
  
    int countNumberswith4(int n) {
        // code here
        int cnt=0;
        for(int i=1;i<=n;i++){
            if(check4(i)) cnt++;
        }
        return cnt;
        
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        Solution obj;
        int res = obj.countNumberswith4(n);

        cout << res << endl;
    
cout << "~" << "\n";
}
}

// } Driver Code Ends