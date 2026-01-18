#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int left = 0, right = nums.size() - 1;
        int p = right;
        vector<int> ans(p + 1, 0);
        while (left <= right) {
            int l = nums[left] * nums[left];
            int r = nums[right] * nums[right];
            if (l > r) {
                ans[p] = l;
                left++;
            }
            else {
                ans[p] = r;
                right--;

            }
            p--;
        }
        return ans;
    }
};
int main() {
    vector<int> height = { -4,-1,0,3,10};
    int value = 3;
    Solution sol;
    
    vector<int> result = sol.sortedSquares(height);
    for (int i : result)
        cout << i << " ";
}
