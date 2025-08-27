class Solution {
  public:
    int countTriangles(vector<int>& arr) {
        // code here
        int cnt=0;
        sort(arr.begin(),arr.end());
        for(int k=arr.size()-1;k>=2;k--){
            int i=0;
            int j=k-1;
            while(i<j){
                if(arr[i]+arr[j]>arr[k]){
                    cnt=cnt+(j-i);
                    j--;
                }
                else{
                    i++;
                }
            }
        }
        return cnt;
    }
};
