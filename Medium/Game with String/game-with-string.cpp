//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int minValue(string s, int k){
        // code here
        map<char,int>m;
        int ans=0;
        for(auto it:s){
            m[it]++;
        }
        vector<int>v;
        for(auto it:m){
            v.push_back(it.second);
        }
        for(int i=0;i<k;i++)
        {
            sort(v.begin(),v.end());
            int k1=v[v.size()-1];
            k1=k1-1;
            v[v.size()-1]=k1;
        }
        for(auto it:v){
            ans+=it*it;
        }
        return ans;
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int k;
        cin>>s>>k;
        
        Solution ob;
        cout<<ob.minValue(s, k)<<"\n";
    }
    return 0;
}
// } Driver Code Ends