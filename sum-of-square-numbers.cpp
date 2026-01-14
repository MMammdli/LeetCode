#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool judgeSquareSum(int c) {
        long long left = 0, right = sqrt(c);
        while (left <= right) {
            long long sl = left * left;
            long long sr = right * right;
            if (c == sr + sl) return true;
            else if (c > sr + sl) left++;
            else right--;
        }
        return false;
    }
};

int main() {
    int target = 5;
    Solution sol;
    bool result = sol.judgeSquareSum(target);
    cout << result;
}
