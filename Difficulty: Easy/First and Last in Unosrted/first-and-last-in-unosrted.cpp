class Solution {
  public:
    vector<int> findIndex(vector<int>& arr, int key) {
        // code here
        int start=-1;
        for(int i=0; i<arr.size(); i++){
            if(arr[i] == key){
                start=i;
                break;
            }
        }
        
        if(start == -1){
            return {-1, -1};
        }
        
        int end=-1;
        for(int i=arr.size()-1; i>=start; i--){
            if(arr[i] == key){
                end=i;
                break;
            }
        }
        
        return {start, end};
    }
};