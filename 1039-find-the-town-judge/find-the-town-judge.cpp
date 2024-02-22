class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int>trusts(n+1);
        vector<int>trusted(n+1);
        for(auto it:trust){
            ++trusts[it[0]];
            ++trusted[it[1]];
        }
        for(int i=1;i<=n;++i)
        {
            if(trusted[i]==n-1&&trusts[i]==0){
                return i;
            }
        }
        return -1;

    }
};