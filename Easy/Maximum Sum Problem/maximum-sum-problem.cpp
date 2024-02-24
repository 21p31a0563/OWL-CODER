//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
        int maxSum(int n)
        {
            //code here.
            
        if(n<4){
            return n;
            
        }
        int ans=maxSum(n/2)+maxSum(n/3)+maxSum(n/4);
        if(ans>n){
            return ans;
        }
        else{
            return n;
        }
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
        cout<<ob.maxSum(n)<<"\n";
    }
    return 0;
}
// } Driver Code Ends