class Solution {
	public:
	int longestKSubstr(string &s, int k) {
		int len = -1;
		int low = 0 ; int high = 0;
		string sum ;
		unordered_map<char, int> mp;
		
		while (high<s.size()) {
			sum = sum + s[high];
			mp[s[high]]++;
			
			if (mp.size()>k) {
				mp[s[low]]--;
				
				if (mp[s[low]] == 0) {
					mp.erase(s[low]);
				}
				sum = sum.substr(1);
				low++;
			}
			
			if (mp.size() == k) {
				len = max(len, high - low + 1);
			}
			high++;
		}
		return len;
	}
};
