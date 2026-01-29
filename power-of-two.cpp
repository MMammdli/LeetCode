#include <iostream>
using namespace std;
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n == 0) return true;
        while (n % 2 == 0) {
            n /= 2;
        }
        if (n == 1) return true;
        else return false;
    }
};
int main() {
    Solution sol;
    int n=0;
    bool result = sol.isPowerOfTwo(n);
    cout << result;

}
