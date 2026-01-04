#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
	vector<int> shuffle(vector<int>& nums, int n) {
		vector<int> ans;

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < nums.size() / n; j++) {
				ans.push_back(nums[i + j * n]);
			}
		}

		return ans;
	}
};
int main() {
	vector<int> nums = { 1,1,2,2};
	int n = 2;

	Solution sol;

	vector<int> result = sol.shuffle(nums, n);

	for (int z : result)
		cout << z << " ";
}
