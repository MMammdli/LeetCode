#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
	vector<int> moveZeroes(vector<int>& nums) {
		int size = nums.size();
		int i = 0, j = 0;

		while (i < size) {
			if (nums[i] != 0) {
				int temp = nums[j];
				nums[j] = nums[i];
				nums[i] = temp;
				j++;
			}
			i++;
		}
		return nums;
	}
};
int main() {
	vector<int> nums = { 0,1,0,3,12 };
	Solution sol;
	vector<int> result = sol.moveZeroes(nums);

	for (int z : result)
		cout << z << " ";
}
