class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>>bits;
        vector<int>v;
        int n=arr.size();
        for(int i=0;i<n;i++){
            int count=0;
            int x=arr[i];
            while(x){
                x=x&(x-1);
                count++;
            }
            bits.push_back({count,arr[i]});
        }
        sort(bits.begin(),bits.end());
        for(int i=0;i<n;i++){
            v.push_back(bits[i].second);
        }
        return v;
  
    }
};