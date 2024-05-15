//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int findMin(int nums[], int n){
        //complete the function here
        int low=0;
        int high=n-1;
        int mini=INT_MAX;

        while(low<=high){
            int mid=low+(high-low)/2;

            //if left part sorted
            if(nums[low]<=nums[mid]){
                mini=min(mini,nums[low]);
                low=mid+1; // eliminate left part
            }

            else{ //right part sorted
                mini=min(mini,nums[mid]);
                high=mid-1; //eliminate right part
            }
        }
        return mini;
    }
};

//{ Driver Code Starts.


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution ob;
		cout<<ob.findMin(a, n)<<endl;
	}
	return 0;
}
// } Driver Code Ends