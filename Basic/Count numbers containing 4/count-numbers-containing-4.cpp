//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int countNumberswith4(int n) {
        // code here
        int c=0;
        for(int i=1;i<=n;i++)
        {
            int temp=i;
            while(temp>0)
            {
                int x=temp%10;
                if(x==4)
                {
                    c++;
                    break;
                }
                temp/=10;
            }
        }
        return c;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.countNumberswith4(N) << endl;
    }
    return 0;
}
// } Driver Code Ends