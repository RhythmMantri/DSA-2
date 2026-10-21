class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int low =0;
        int high=0;
        int sum=0;
        int res = INT_MIN;
        while(high<arr.size()){
            sum = sum +arr[high];
            int len = high-low+1;
            if(len==k){
                res =max(res,sum);
                sum = sum -arr[low];
                low++;
            }
            high++;
        }
        return res;
    }
};