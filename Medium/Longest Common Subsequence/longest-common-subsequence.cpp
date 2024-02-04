//{ Driver Code Starts
#include<bits/stdc++.h>
const int mod=1e9+7;
using namespace std;

// } Driver Code Ends
// function to find longest common subsequence

class Solution
{
    public:
    //Function to find the length of longest common subsequence in two strings.
    int dp[1001][1001];
    
    int fun(int m,int n,string &s1,string &s2){
        if(m==0 || n==0){
            return 0;
            
        }
        if(dp[m][n]!=-1)return dp[m][n];
        if(s1[m-1]==s2[n-1]){
            dp[m][n]= 1+fun(m-1,n-1,s1,s2);
            
        }
        else{
            dp[m][n]=max((fun(m,n-1,s1,s2)),fun(m-1,n,s1,s2));
        }
        return dp[m][n];
    }
    int lcs(int m, int n, string s1, string s2)
    {
        // your code here
        memset(dp,-1,sizeof(dp));
        int ans=fun(m,n,s1,s2);
        
    }
};


//{ Driver Code Starts.
int main()
{
    int t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;          // Take size of both the strings as input
        string s1,s2;
        cin>>s1>>s2;        // Take both the string as input
        Solution ob;
        cout << ob.lcs(n, m, s1, s2) << endl;
    }
    return 0;
}

// } Driver Code Ends