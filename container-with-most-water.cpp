#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size() - 1;
        int size = 0,field;
        while (left < right) {
            int widht = right - left;
            if (height[left] < height[right]) {
                field = height[left] * widht;
                left++;
            }
            else {
                field = height[right] * widht;
                right--;
            }
            if (field > size) 
                size = field;
           
        }
        return size;
    }
};
int main() {
    vector<int> height = { 1,8,6,2,5,4,8,3,7 };
    int value = 3;
    Solution sol;
    
    int result = sol.maxArea(height);
    cout << result;
}
