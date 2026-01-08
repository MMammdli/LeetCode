#include <iostream>
#include <string>;

using namespace std;
class Solution {
public:
	string toLowerCase(string s) {
		string ans;

		for (char i : s) {
			if ('A' <= i && i <= 'Z')
				ans += (i + 32);
			else
				ans += i;
		}

		return ans;
	}
};
int main() {
	string s = "Hello";
	Solution sol;
	string result = sol.toLowerCase(s);
	cout << result;
}
