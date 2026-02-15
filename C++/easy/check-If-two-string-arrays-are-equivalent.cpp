#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
	bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
		string ans1, ans2;
		for (string w1 : word1)
			ans1 += w1;
		for (string w2 : word2)
			ans2 += w2;

		if (ans1 == ans2)
			return true;
		else
			return false;
	}
};
int main() {
	vector<string> word1 = { "ab", "c" }, word2 = { "a", "bc" };
	Solution sol;

	bool result = sol.arrayStringsAreEqual(word1, word2);

	cout << result;
}
