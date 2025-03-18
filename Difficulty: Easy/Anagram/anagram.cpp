//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function is to check whether two strings are anagram of each other or not.
    bool areAnagrams(string& s1, string& s2) {
        // Your code here
        if(s1.length()!=s2.length()) return false;
        
        vector<int> freq(26,0);
        
        for(int i=0;i<s1.length();i++){
            freq[s1[i]-'a']++;
            freq[s2[i]-'a']--;
        }
        
        for(int i=0;i<26;i++){
            if(freq[i]!=0) return false;
        }
        
        return true;
    }
};


//{ Driver Code Starts.

int main() {

    int t;

    cin >> t;

    while (t--) {
        string c, d;

        cin >> c >> d;
        Solution obj;
        if (obj.areAnagrams(c, d))
            cout << "true" << endl;
        else
            cout << "false" << endl;
        cout << "~" << endl;
    }
}

// } Driver Code Ends