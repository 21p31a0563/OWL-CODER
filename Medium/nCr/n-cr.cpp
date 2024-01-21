//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    const long long mod = 1e9 + 7;
    const long long N = 1001;
    vector<long long> fact;
    vector<long long> invFact;

    // Function for modular exponentiation (a^b % mod)
    long long be(long long a, long long b) {
        long long ans = 1;
        while (b) {
            if (b & 1) {
                b = b - 1;
                ans = (ans * a) % mod;
            } else {
                b = b / 2;
                a = (a * a) % mod;
            }
        }
        return ans;
    }

    // Function to precompute factorials and inverse factorials
    void preFact() {
        fact.resize(N + 1);
        invFact.resize(N + 1);

        fact[0] = 1;
        invFact[0] = 1;
        for (long long i = 1; i <= N; i++) {
            fact[i] = (fact[i - 1] * i) % mod;
            invFact[i] = be(fact[i], mod - 2);
        }
    }

    // Function to calculate nCr modulo mod
    long long nCr(long long n, long long r) {
        preFact();
        if (n < r) {
            return 0;  // nCr is undefined if n < r
        }
        return (fact[n] * invFact[r] % mod * invFact[n - r] % mod) % mod;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, r;
        cin>>n>>r;
        
        Solution ob;
        cout<<ob.nCr(n, r)<<endl;
    }
    return 0;
}
// } Driver Code Ends