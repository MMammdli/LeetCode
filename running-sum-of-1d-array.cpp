#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	vector<int> runningSum(vector<int>& nums) {
		vector<int> result;

		for (int i = 0; i < nums.size(); i++) {
			int sum = 0;
			for (int j = 0; j <= i; j++) {
				sum += nums[j];
			}
			result.push_back(sum);
		}
		return result;
	}
};
int main() {
	vector<int> n = { 1,2,3,4 };
	Solution sol;
	vector<int> result = sol.runningSum(n);
	for (int l : result)
		cout << l << endl;
}
