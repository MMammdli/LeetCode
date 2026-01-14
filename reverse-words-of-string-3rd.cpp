class Solution {
public:
    string reverseWords(string s) {
        s = s + ' ';
        int i = 0, j = 0;
        while (i < s.length()) {
            if (s[i] == ' ') {
                int left = j, right = i - 1;
                while (left < right) {
                    char temp = s[right];
                    s[right] = s[left];
                    s[left] = temp;

                    left++;
                    right--;
                }

                j = i+1;
            }
            i++;
        }
        s.pop_back();
        return s;
    }
};
