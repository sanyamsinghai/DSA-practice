//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    vector<int> find(int arr[], int n , int x )
    {
        // code here
        int j=-1;
        int y=-1;
        
        
        
        vector<int>v;
        
        for(int i=0 ; i<n ;i++){
            if(arr[i]==x){
                j=i;
                v.push_back(j);
                break;
            }
        }
        
        for(int i=n-1; i>=0 ;i--){
            if(arr[i]==x){
                y=i;
                v.push_back(y);
                break;
            }
        }
        
        if(j==-1 && y==-1){
            v.push_back(-1);
            v.push_back(-1);
        }
        
        return v;
        
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends