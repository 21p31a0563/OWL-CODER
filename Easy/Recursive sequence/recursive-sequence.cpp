//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    long long sequence(int n){
        // code here
         long long int mod=1e9+7;
        long sum=0;
        long val=1;
        for(int i=1;i<=n;i++)
        {
            long long ans=1;
            for(int j=1;j<=i;j++){
                ans=(ans*val)%mod;
                val++;
            }
            sum=(sum+ans)%mod;
            
        }
        return sum;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.sequence(N)<<endl;
    }
    return 0;
}
// } Driver Code Ends