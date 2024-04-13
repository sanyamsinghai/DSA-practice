//{ Driver Code Starts
 

#include<bits/stdc++.h>
using namespace std;
 
int findDuplicate(int a[]);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int A[10];
		for(int i=0;i<10;i++)
		cin>>A[i];
		
		cout<<findDuplicate(A)<<endl;
	}
}
// } Driver Code Ends


    

int findDuplicate(int arr[])
{
    // Your code goes here
    unordered_map<int,int>mapp;
    
    for(int i=0 ; i<10 ; i++){
        mapp[arr[i]]++;
    }
    for(auto it:mapp){
        if(it.second==5){
            return it.first;
        }
    }
}