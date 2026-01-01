#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
	vector<int> getConcatenation(vector<int>& nums) {
		int len = nums.size();
		vector<int> ans(2 * len, 0);

		for (int i = 0; i < len; i++) {
			ans[i] = nums[i];
			ans[i + len] = nums[i];
		}
		return ans;
	}
};
int main() {
	vector<int> nums = { 1,2,1 };
	Solution sol;
	vector<int> result = sol.getConcatenation(nums);
	for (int k : result)
		cout << k << endl;
}
