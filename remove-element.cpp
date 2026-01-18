#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0, j = 0;
        int size = nums.size();
        while (i < size) {
            if (nums[i] != val) {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
                j++;
            }
            i++;
        }
        return j;
    }
};
int main() {
    vector<int> nums = { 3,2,2,3 };
    int value = 3;
    Solution sol;
    
    int result = sol.removeElement(nums, value);
    cout << result;
}
