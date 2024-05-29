//{ Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
  
    bool isPossible(int arr[],int n,long long mid,int k){
        long long last=0;
        int cntPainters=1;

        for(int i=0 ; i<n ; i++){
            if(arr[i]+last>mid){
                cntPainters++;
                last=arr[i];
                if(cntPainters>k){
                    return false;
                }
            }
            else{
                last+=arr[i];
        }
    }
        return true;
}
  
    long long minTime(int arr[], int n, int k)
    {
        // code here
        // return minimum time
        long long low=*max_element(arr,arr+n);
        long long high=accumulate(arr,arr+n,0LL);
        
        while(low<=high){
            long long mid=low+(high-low)/2;

            if(isPossible(arr,n,mid,k)){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k,n;
		cin>>k>>n;
		
		int arr[n];
		for(int i=0;i<n;i++)
		    cin>>arr[i];
		Solution obj;
		cout << obj.minTime(arr, n, k) << endl;
	}
	return 0;
}
// } Driver Code Ends