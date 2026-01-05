#include <iostream>
#include <vector>
#include <string>

using namespace std;
class Solution {
public:
	int mostWordsFound(vector<string>& sentences) {
		int longest = 0;
		for (int i = 0; i < sentences.size(); i++) {
			int count = 0;
			for (int j = 0; j < sentences[i].size(); j++) {
				if (sentences[i][j] == ' ')
					count++;

			}
			count++;
			if (longest < count)
				longest = count;
		}
		return longest;
	}
};
int main() {
	vector<string> sentences = { "please wait", "continue to fight", "continue to win" };
	Solution sol;
	int result = sol.mostWordsFound(sentences);
	cout << result;
}
