class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        // vector<int> result;
        // for(auto i : nums1){
        //     if(count(nums2.begin(),nums2.end(),i)>0){//checks if the number present in "nums1" is also present in "nums2" 
        //         if(count(result.begin(),result.end(),i)==0){//checks if the number present in both "nums1" and "nums2" is already in "result" vector or not
        //         result.push_back(i);
        //         }
        //     }
        // }
        // return result;
       unordered_set<int>set1;
       unordered_set<int>set2;
       for(auto it:nums1){
           set1.insert(it);
       }
       for(auto it:nums2){
           set2.insert(it);
       }
       vector<int>v;
       for(auto it:set1){
           if(set2.find(it)!=set2.end()){
               v.push_back(it);
           }
       }
       return v;
       }
       
       
};