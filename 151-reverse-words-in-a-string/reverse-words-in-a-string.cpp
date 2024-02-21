class Solution {
public:
    string reverseWords(string s) {
        int i = s.size() - 1;
        string ans = "";
        while (i >= 0) {
            while (i >= 0 && s[i] == ' ') i--;
            int j = i;
            if (i < 0) {
                break;
            }
            while (i >= 0 && s[i] != ' ') i--;
            if (ans.size() == 0) {
                ans += s.substr(i + 1, j - i); // Fix: use j - i instead of j + 1
            } else {
                ans += ' ' + s.substr(i + 1, j - i); // Fix: use j - i instead of j + 1
            }
        }
        return ans;
    }
};
