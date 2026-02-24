#include <iostream>
#include <unordered_map>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> seen;
        for (int i : nums)
            seen[i]++;

        for (auto j : seen) {
            if (j.second == 1) return j.first;
        }
        return -1;
    }
};

int main() {
    vector<int> nums = { 1,1,2,4,2 };
    Solution sol;
    int res = sol.singleNumber(nums);
    cout << res;
}
