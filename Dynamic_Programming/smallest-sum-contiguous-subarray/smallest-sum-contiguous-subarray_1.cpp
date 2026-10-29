class Solution {
	public:
	int minSubarraySum(vector<int> &arr) {
		// code here
		int bestEnding = 0;
		int ans = INT_MAX;
		
		for (int i = 0 ; i<arr.size(); i++) {
			int v1 = bestEnding + arr[i];
			int v2 = arr[i];
			bestEnding = min (v1, v2);
			ans = min(ans, bestEnding);
		}
		return ans;
	}
};
