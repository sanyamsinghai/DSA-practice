//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find the minimum element in sorted and rotated array.
    int minNumber(int nums[], int low, int high)
    {
        // Your code here;
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
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];	
		Solution obj;
		cout << obj.minNumber(a,0,n-1) << endl;
	}
	return 0;
}
// } Driver Code Ends