#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count = 0;
        unordered_set<char> seen;
        for (char c : allowed)
            seen.insert(c);

        for (string s : words) {
            int c = 0;
            for (int i = 0; i < s.length(); i++) {
                if (seen.count(s[i]))
                    c++;
            }
            if (s.length() == c)
                count++;
        }
        return count;
    }
};

int main() {
    string a = "cad";
    vector<string> b = { "cc","acd","b","ba","bac","bad","ac","d" };

    Solution sol;
    int result = sol.countConsistentStrings(a, b);
    cout << result;
}
