//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
public:
    string longestPalin(string S) {
        int n = S.length();
        int start = 0;  // Start index of the longest palindromic substring
        int maxLength = 1;  // Length of the longest palindromic substring

        for (int i = 0; i < n; i++) {
            // Expand around the center for odd length palindromes
            int left = i;
            int right = i;

            while (left >= 0 && right < n && S[left] == S[right]) {
                if (right - left + 1 > maxLength) {
                    start = left;
                    maxLength = right - left + 1;
                }
                left--;
                right++;
            }

            // Expand around the center for even length palindromes
            left = i;
            right = i + 1;

            while (left >= 0 && right < n && S[left] == S[right]) {
                if (right - left + 1 > maxLength) {
                    start = left;
                    maxLength = right - left + 1;
                }
                left--;
                right++;
            }
        }

        return S.substr(start, maxLength);
    }
};


//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends