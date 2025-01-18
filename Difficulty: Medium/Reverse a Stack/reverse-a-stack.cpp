//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:

    void insertAtBottom(stack<int> &st,int element){
        
        if(st.empty()){
            st.push(element);
            return;
        }
        
        int num=st.top();
        st.pop();
        
        insertAtBottom(st,element);
        
        st.push(num);
        return;
        
        
    }

    void Reverse(stack<int> &st){
        
        if(st.empty()){
            return;
        }
        
        int num=st.top();
        st.pop();
        
        Reverse(st);
        
        insertAtBottom(st,num);
        
    }
};

//{ Driver Code Starts.


int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        stack<int> St;
        for(int i=0;i<N;i++){
            int x;
            cin>>x;
            St.push(x);
        }
        Solution ob;
        ob.Reverse(St);
        vector<int>res;
        while(St.size())
        {
            res.push_back(St.top());
            St.pop();
        }
        for(int i = res.size()-1;i>=0;i--)
        {
            cout<<res[i]<<" ";
        }
        
        cout<<endl;
    
cout << "~" << "\n";
}
}
// } Driver Code Ends