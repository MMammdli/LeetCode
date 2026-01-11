#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
	vector<int> plusOne(vector<int>& digits) {
		vector<int> ans;
		int left = 0, right = digits.size() - 1;
		while (left < right) {
			int temp = digits[right];
			digits[right] = digits[left];
			digits[left] = temp;

			left++;
			right--;
		}

		for (int i = 0; i < digits.size(); i++) {
			if (digits[i] == 9) {
				digits[i] = 0;
			}
			else {
				digits[i]++;
				break;
			}
		}
		if (digits[digits.size() - 1] == 0)
			digits.push_back(1);
		left = 0, right = digits.size() - 1;
		while (left < right) {
			int temp = digits[right];
			digits[right] = digits[left];
			digits[left] = temp;

			left++;
			right--;
		}
		return digits;
	}
};
int main() {

	vector<int> digits = { 1,9,9 };
	Solution sol;
	vector<int> result = sol.plusOne(digits);

	for (int r : result)
		cout << r << " ";
}
