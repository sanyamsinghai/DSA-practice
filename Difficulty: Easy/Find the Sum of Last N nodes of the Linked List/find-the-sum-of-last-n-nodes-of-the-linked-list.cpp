//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};


// } Driver Code Ends
class Solution {
  public:
    /*Structure of the node of the linled list is as

    struct Node {
        int data;
        struct Node* next;

        Node(int x){
            data = x;
            next = NULL;
        }
    };
    */
    // your task is to complete this function
    // function should return sum of last n nodes
    
    Node* reverse(Node* head){
        if(head==NULL || head->next==NULL){
            return head;
        }
        Node* newhead=reverse(head->next);
        Node* front=head->next;
        front->next=head;
        head->next=NULL;
        
        return newhead;
    }
    
    int sumOfLastN_Nodes(struct Node* head, int n) {
        // Code here
        int sum=0;
        Node* Newhead=reverse(head);
        
        Node* temp=Newhead;
        for(int i=1 ; i<=n ; i++){
            sum+=temp->data;
            temp=temp->next;
        }
        
        return sum;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int n;
        cin >> n;
        cin.ignore();
        struct Node *head = new Node(arr[0]);
        struct Node *tail = head;
        for (int i = 1; i < arr.size(); ++i) {
            tail->next = new Node(arr[i]);
            tail = tail->next;
        }
        Solution ob;
        cout << ob.sumOfLastN_Nodes(head, n) << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends