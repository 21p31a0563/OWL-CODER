//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
        //User function Template for C++
        
        int maxProfit(vector<int>&prices){
            //Write your code here..
        
        int n = prices.size();
        if (n < 2) {
            return 0; // Not enough prices to make a profit
        }

        // Initialize the buy and sell arrays to keep track of the two transactions
        vector<int> buy(3, INT_MIN);
        vector<int> sell(3, 0);

        for (int i = 0; i < n; ++i) {
            for (int j = 1; j <= 2; ++j) {
                buy[j] = max(buy[j], sell[j - 1] - prices[i]);
                sell[j] = max(sell[j], buy[j] + prices[i]);
            }
        }

        return sell[2]; // Maximum profit after 2 transactions
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        vector<int> price(n);
        for(int i=0;i<n;i++) cin>>price[i];
        Solution obj;
        cout<<obj.maxProfit(price)<<endl;
    }

}

// } Driver Code Ends