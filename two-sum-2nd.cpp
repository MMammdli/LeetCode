#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0, right = numbers.size() - 1;
        while (left < right) {
            int sum = numbers[left] + numbers[right];
            if (target == sum)
                return{ left + 1,right + 1 };
            else if (target > sum)
                left++;
            else
                right--;
        }
        return { -1,-1 };
        
    }
};

int main() {
    vector<int> nums = { -10,-8,-2,1,2,5,6 };
    int target = 0;
    Solution sol;
    vector<int> result = sol.twoSum(nums, target);
    for (int m : result)
        cout << m << " ";
}
