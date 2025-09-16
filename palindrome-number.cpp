#include <iostream>
using namespace std;


class Solution {
public:
    bool isPalindrom(int number) {
        if(number < 0 ) return false;

        int reverse = 0, original = number;
        while(number) {
            reverse = reverse * 10 + number % 10;
            number = number / 10;
        }
        return reverse == original;
    }
};

int main() {
    Solution s;
    cout << s.isPalindrom(121) << endl;
    cout << s.isPalindrom(123) << endl;
    cout << s.isPalindrom(-121) << endl;
}
