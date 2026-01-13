#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
	int climbStairs(int n) {
		if (n <= 2) return n;

		vector<int> steps(n);
		steps[0] = 1;
		steps[1] = 2;

		for (int i = 2; i < n; i++)
			steps[i] = steps[i - 1] + steps[i - 2];

		return steps[n - 1];
	}
};
int main() {
	int n = 4;
	Solution sol;
	int result = sol.climbStairs(n);

	cout << result;
}
