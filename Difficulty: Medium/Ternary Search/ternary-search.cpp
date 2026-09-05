class Solution {
  public:
    bool ternarySearch(vector<int> &arr, int x) {
        // code here
            int l = 0;
            int r = arr.size() - 1;

            while (l <= r) {

                int mid1 = l + (r - l) / 3;
                int mid2 = r - (r - l) / 3;

                if (arr[mid1] == x || arr[mid2] == x) {
                    return true;
                }

                if (x < arr[mid1]) {
                    r = mid1 - 1;
                } else if (x > arr[mid2]) {
                    l = mid2 + 1;
                } else {
                    l = mid1 + 1;
                    r = mid2 - 1;
                }
            }

            return false;
    }
};