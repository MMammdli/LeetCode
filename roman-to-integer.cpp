#include <iostream>
using namespace std;

class Solution {
public:
    int RomanToInt(char s) {
        if(s == 'I') return 1;
        else if(s == 'V') return 5;
        else if(s == 'X') return 10;
        else if(s == 'L') return 50;
        else if(s == 'C') return 100;
        else if(s == 'D') return 500;
        else if(s == 'M') return 1000;
        else return 0;
    }
    int Conversion(string roman) {
        int result = 0;
        for (int i = 0; i < roman.length(); i++) {
            if(i+1 < roman.length() && RomanToInt(roman[i]) < RomanToInt(roman[i+1])) {
                result = result - RomanToInt(roman[i]);
            }
            else {
                result = result + RomanToInt(roman[i]);
            }
        }
        return result;
    }
};
int main(){
    Solution s;

    cout << s.Conversion("XV") << endl; //15
    cout << s.Conversion("IV") << endl; //4
    return 0;
}
