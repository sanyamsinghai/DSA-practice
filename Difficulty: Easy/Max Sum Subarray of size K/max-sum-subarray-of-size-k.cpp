//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int maximumSumSubarray(vector<int>& nums, int k) {
        // code here
        int sum=0;
        int maxsum=0;

        for(int i=0;i<k;i++){
            sum+=nums[i];
        }

        maxsum=sum;

        int i=0;
        int j=k;

        while(j<nums.size()){
            sum-=nums[i];
            sum+=nums[j];
            i++;
            j++;

            maxsum=max(maxsum,sum);
        }
        return maxsum;
    }
};

//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution ob;
        int ans = ob.maximumSumSubarray(arr, k);
        cout << ans << "\n";
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends