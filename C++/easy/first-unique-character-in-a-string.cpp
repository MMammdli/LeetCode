#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> nums(26,0);
        for (char c : s) {
            nums[c - 'a']++;
        }

        for (int i = 0; i < s.length(); i++) {
            if (nums[s[i] - 'a'] == 1)
                return i;
        }
        return -1;
    }
};

int main() {
    string n = "leetcode";
    Solution sol;
    cout << sol.firstUniqChar(n);
}
