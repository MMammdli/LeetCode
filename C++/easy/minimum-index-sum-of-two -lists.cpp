#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        int min_sum = INT_MAX;
        vector<string> result;
        for (int i = 0; i < list1.size(); i++) {
            for (int j = 0; j < list2.size(); j++) {
                if (list1[i] == list2[j]) {
                    if (min_sum > i + j) {
                        result.clear();
                        min_sum = i + j;
                        result.push_back(list1[i]);
                    }
                    else if (min_sum == i + j)
                        result.push_back(list1[i]);
                }
            }
        }
        return result;
    }
};
int main() {
    vector<string> list1 = { "happy","sad","good" }, list2 = { "sad","happy","good" };
    Solution sol;
    vector<string> result = sol.findRestaurant(list1, list2);
    for (string r : result)
        cout << r << endl;

}
