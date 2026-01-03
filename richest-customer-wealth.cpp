#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
	int maximumWealth(vector<vector<int>>& accounts) {
		int result = 0;
		for (int i = 0; i < accounts.size(); i++) {
			int sum = 0;
			for (int j = 0; j < accounts[i].size(); j++)
				sum += accounts[i][j];
			if (result < sum)
				result = sum;
		}

		return result;
	}
};
int main() {
	vector<vector<int>> arr = { {1,5},{7,3},{3,5} };
	Solution sol;
	int result = sol.maximumWealth(arr);
	cout << result;
}
