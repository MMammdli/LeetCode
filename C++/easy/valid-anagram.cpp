#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    bool isAnagram(string t, string s) {

        vector<int> count(26, 0);

        for (int i = 0; i < t.length(); i++) {
            count[t[i] - 'a']++;
            count[s[i] - 'a']--;
        }

        for (int c : count) {
            if (c != 0) return false;
        }

        return true;
    }
};

int main() {
    string t, s;
    cin >> t >> s;

    Solution solution;
    if (solution.isAnagram(t, s)) {
        cout << true << endl;
    }
    else {
        cout << false << endl;
    }

    return 0;
}
