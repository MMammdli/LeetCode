#include <iostream>
using namespace std;
class Solution {
public:
    bool isHappy(int n) {
        while (true) {
            int sum = 0;
            while (n > 0) {
                int q = n % 10;
                n = n / 10;
                sum = sum + q * q;
            }
            if (sum == 1 || sum == 7) return true;
            else if (sum <= 9) return false;
            n = sum;
        }
    }
};
int main() {
    Solution sol;
    int n = 1111111;
    bool result = sol.isHappy(n);
    cout << result;
}
