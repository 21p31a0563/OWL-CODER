#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for (auto it : words) {
            if (isPalindrome(it)) {
                return it;
            }
        }
        return "";
    }

    bool isPalindrome(string s) {
        int left = 0;
        int right = s.length() - 1;
        while (left < right) {
            if (s[left] != s[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};
