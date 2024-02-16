class Solution {
public:
static bool cmp (pair<int,int>a,pair<int,int>b)
    {
        return a.second<b.second;
    }
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
    
    map<int,int>mp;
    for(auto it:arr){
        mp[it]++;
    }
    vector<pair<int,int>>v(mp.begin(),mp.end());
    sort(v.begin(),v.end(),cmp);
    int cnt=0;
    for(auto it:v){
        if(it.second<=k){
            k=k-it.second;
            cnt++;
        }
        else{
            break;
        }
    }
    return v.size()-cnt;

    }
};