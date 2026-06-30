class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int second_l = arr[0];
        int largest = -1;
        
        for(int i=0;i<arr.size();i++){
            if(arr[i]>largest){
                second_l = largest;
                largest = arr[i];
            }
            if(arr[i]>second_l && arr[i]<largest){
                second_l=arr[i];
            }
        }
        return second_l;
    }
};