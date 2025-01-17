//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // Function to delete middle element of a stack.
    
    void deleteMiddleElement(stack<int>&s , int cnt , int size){

    //base case
    if(cnt==size/2){
        s.pop();
        return;
    }

    int num=s.top();
    s.pop();

    //recursive call
    deleteMiddleElement(s,cnt+1,size);

    s.push(num);

}
    
    void deleteMid(stack<int>& s) {
        // code here..
        int cnt=0;
        deleteMiddleElement(s,cnt,s.size());
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        stack<int> s;
        int num;
        while (ss >> num) {
            s.push(num);
        }

        Solution ob;
        ob.deleteMid(s);
        while (!s.empty()) {
            cout << s.top() << " ";
            s.pop();
        }
        cout << endl;
        cout << "~\n";
    }
    return 0;
}

// } Driver Code Ends