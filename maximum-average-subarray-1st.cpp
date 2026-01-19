#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int left = 0, right = k,size = nums.size();
        double sum = 0;
        for (int i = 0; i < k; i++) {
            sum += nums[i];
        }
        double max_medium = sum / k;
        while (right < size) {
            sum = sum - nums[left];
            left++;

            sum = sum + nums[right];
            right++;

            double medium = sum / k;
            if (max_medium < medium)
                max_medium = medium;
        }
        return max_medium;
    }
};

int main() {
    vector<int> nums = { 1,12,-5,-6,50,3 };
    int k = 4;
    Solution sol;
    double result = sol.findMaxAverage(nums, k);
    cout << result << endl;
}
