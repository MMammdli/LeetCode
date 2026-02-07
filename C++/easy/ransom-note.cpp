#include <iostream>
#include <unordered_map>
using namespace std;
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> seen;

        for (char i : ransomNote)
            seen[i]++;

        for (char j : magazine) {
            if (seen.count(j)) {
                seen[j]--;
                if (seen[j] == 0)
                    seen.erase(j);
            }
        }
        return seen.empty();
    }
};

int main() {
    string s1 = "aa", s2 = "aab";
    Solution sol;
    bool result = sol.canConstruct(s1, s2);
    cout << result;
}
