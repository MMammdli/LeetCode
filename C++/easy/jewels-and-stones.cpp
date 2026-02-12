#include <iostream>
#include <unordered_set>
using namespace std;
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0;
        unordered_set<char> seen;
        for (char c : jewels)
            seen.insert(c);

        for (char i : stones) {
            if (seen.count(i)) {
                count++;
            }
        }
        return count;
    }
};

int main() {
    string a = "aA";
    string b = "aAAbbbb";
    Solution sol;
    int result = sol.numJewelsInStones(a, b);
    cout << result;
}
