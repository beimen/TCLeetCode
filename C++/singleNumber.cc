class Solution {
public:
	int singleNumber(vector<int>& nums) {
		int result = 0;
		for_each(nums.begin(), nums.end(), [&result](int val) {
			result ^= val;
		});
		return result;
	}
};