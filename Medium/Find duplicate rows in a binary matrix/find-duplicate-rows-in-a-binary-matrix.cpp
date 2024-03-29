//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    vector<int> repeatedRows(vector<vector<int>> &matrix, int M, int N)
    {
        set<int> ans;
        for (int i = 0; i < matrix.size(); i++)
        {
            vector<int> v(matrix[i]);
            for (int j = i + 1; j < matrix.size(); j++)  // Fix: Change i to j here
            {
                vector<int> v1(matrix[j]);
                if (v == v1)
                {
                    ans.insert(j);
                }
            }
        }
        vector<int>v;
        for(auto it:ans)
        {
            v.push_back(it);
        }
        return v;
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    while(t--) 
    {
        int row, col;
        cin>> row>> col;
        vector<vector<int> > matrix(row); 
        for(int i=0; i<row; i++)
        {
            matrix[i].assign(col, 0);
            for( int j=0; j<col; j++)
            {
                cin>>matrix[i][j];
            }
        }
        
        Solution ob;
        vector<int> ans = ob.repeatedRows(matrix, row, col);


        for (int i = 0; i < ans.size(); ++i)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}



// } Driver Code Ends