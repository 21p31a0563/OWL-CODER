//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
vector<string> AllParenthesis(int n) ;


// } Driver Code Ends
//User function Template for C++

// N is the number of pairs of parentheses
// Return list of all combinations of balanced parantheses
class Solution {
    void fn(string &s, int open, int close, int n, vector<string> &ans) {

        if (open + close == 2 * n) {
            ans.push_back(s);
            return;
        }

        if (open < n) {
            s.push_back('(');
            fn(s, open + 1, close, n, ans);
            s.pop_back();
        }

        if (close < open) {
            s.push_back(')');
            fn(s, open, close + 1, n, ans);
            s.pop_back();
        }
    }

public:
    vector<string> AllParenthesis(int n) {
        vector<string> ans;
        int open = 0;
        int close = 0;
        string s;
        fn(s, open, close, n, ans);
        return ans;
    }
};


//{ Driver Code Starts.


int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		Solution ob;
		vector<string> result = ob.AllParenthesis(n); 
		sort(result.begin(),result.end());
		for (int i = 0; i < result.size(); ++i)
			cout<<result[i]<<"\n";
	}
	return 0; 
} 

// } Driver Code Ends