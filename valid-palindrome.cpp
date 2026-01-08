#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
	bool isPalindrome(string s) {
		string result;

		if (s.empty())
			return true;
		else
			for (char i : s) {
				if ('A' <= i && i <= 'Z')
					result += tolower(i);
				else if (('a' <= i && i <= 'z') || ('0' <= i && i <= '9'))
					result += i;
			}
		int right = result.size() - 1, left = 0;
		while (left < right) {
			if (result[left] != result[right])
				return false;

			left++;
			right--;
		}
		return true;
	}
};
int main() {
	string s = "A man, a plan, a canal: Panama";
	Solution sol;
	bool result = sol.isPalindrome(s);
	cout << result;
}
