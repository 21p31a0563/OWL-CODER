//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
		vector<string> AllPossibleStrings(string s){
		    // Code here
		    vector<string>v;
		    for(int i=0;i<pow(2,s.length());i++){
		        string s1;
		 
		        for(int j=0;j<s.length();j++)
		        {
		            if((i&(1<<j))!=0){
		                s1=s1+s[j];
		            }
		        }
		        if(s1!=""){
		        v.push_back(s1);
		        }
		        
		    }
		    sort(v.begin(),v.end());
		    return v;
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}
// } Driver Code Ends