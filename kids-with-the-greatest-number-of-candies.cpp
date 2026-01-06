#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
	vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
		vector<bool> ans;
		for (int i = 0; i < candies.size(); i++) {
			int temp = candies[i] + extraCandies;
			int greatest = 0;
			for (int j = 0; j < candies.size(); j++) {
				if (greatest < candies[j])
					greatest = candies[j];
			}
			if (temp >= greatest)
				ans.push_back(true);
			else
				ans.push_back(false);
		}

		return ans;
	}
};
int main() {
	vector<int> candies = { 2,3,5,1,3 };
	int extraCandies = 3;
	Solution sol;
	vector<bool> result = sol.kidsWithCandies(candies, extraCandies);
	for (bool k : result)
		cout << k << " ";
}
