//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	bool sameFreq(string s)
	{
	    // code here
	    int n=s.length();
    unordered_map<int,int> mp;
    int maxFreq=INT_MIN,minFreq=INT_MAX;
    
    for(int i=0;i<n;i++){
        mp[s[i]]++;
    }
    for(auto it: mp){
        maxFreq=max(maxFreq,it.second);
        minFreq=min(minFreq,it.second);
    }
    
    if(maxFreq==minFreq){
        return true;
    }
    if(maxFreq-minFreq==1){
        if(minFreq==1){
            return true;
        }
        
        int cnt=0;
        for(auto it: mp){
            if(it.second==maxFreq){
                cnt++;
            }
        }
        if(cnt>1){
            return false;
        }
        else{
            return true;
        }
    }
    
    return false;
}
	};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.sameFreq(s)<<endl;
    }
}



// } Driver Code Ends