#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        bool istrue = 0;
        vector<int> nums(26, 0);
        int result = 0;

        for (char i : s)
            nums[i - 'a']++;

        for (char i : t)
            nums[i - 'a']--;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == -1) {
                result = i;
            }
        }
        return char(result + 'a');
    }
};
int main() {
    string s = "abcd", t = "abcde";
    Solution sol;
    char result = sol.findTheDifference(s, t);
    cout << result;

}
