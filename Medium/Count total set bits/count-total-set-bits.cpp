//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
public:
    int countSetBits(int n) {
        int count = 0;
        
        for (int i = 1; i <= n; i <<= 1) {
            int quotient = n / (i << 1);
            int remainder = n % (i << 1);
            
            count += quotient * i + max(0, remainder - i + 1);
        }
        
        return count;
    }
};


//{ Driver Code Starts.

// Driver code
int main()
{
	 int t;
	 cin>>t;// input testcases
	 while(t--) //while testcases exist
	 {
	       int n;
	       cin>>n; //input n
	       Solution ob;
	       cout << ob.countSetBits(n) << endl;// print the answer
	  }
	  return 0;
}

// } Driver Code Ends