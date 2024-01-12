//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> primeRange(int M, int N) {
        // code here
    //     int m=1e6;
    //     vector<int>v(m+1,1);
    //     v[0]=0;
    //     v[1]=0;
    //     for(int i=2;i*i<=m;i++){
    //         if(v[i]==1)
    //         for(int j=2*i;j<=m;j+=i){
              
    //                 v[j]=0;
                
    //         }
    //     }
    //     vector<int>ans;
    //     for(int i=M;i<=N;i++)
    //     {
    //         if(v[i]==1){
    //             ans.push_back(i);
    //         }
    //     }
    //     return ans;
        
    // }
     vector<bool>isPrime(N+1,true);
        vector<int>answer;
        for(int idx = 0; idx <M ; idx++)
          isPrime[idx] = false;
          isPrime[1] = false;
        for(int idx = 2 ; idx*idx <= N;idx++){
            for(int jdx = idx*2 ;jdx <=N; jdx += idx){
             
               isPrime[jdx] = false;  
            }
        }
        
        
        for(int idx = 0 ; idx <isPrime.size();idx++){
            if(isPrime[idx] == true)
              answer.push_back(idx);
        }
        return answer;
}};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, K;
        cin >> M >> N;
        Solution ob;
        vector<int> ans = ob.primeRange(M, N);
        for (auto u : ans) cout << u << " ";
        cout << "\n";
    }
}
// } Driver Code Ends