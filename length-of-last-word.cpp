#include <iostream>
#include <string>

using namespace std;
class Solution {
public:
	int lengthOfLastWord(string s) {
		int i = s.length() - 1, count = 0;

		while (i >= 0 && s[i] == ' ')
			i--;

		while (i >= 0 && s[i] != ' ') {
			count++;
			i--;
		}


		return count;
	}
};
int main() {
	string s = "Hello World    ";
	Solution sol;
	int result = sol.lengthOfLastWord(s);
	cout << result;
}
