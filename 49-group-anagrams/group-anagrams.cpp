class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //create unordered map to store anagrams
        unordered_map<string ,vector<string>>mp;
        //itereate through the each string in the intput vector
        for(auto x:strs){
            //create a copy of string and sort its characters
            string word=x;
            sort(word.begin(),word.end());
            //use the sorted string as key in the map and push the original string to the corresponding vector
            mp[word].push_back(x);
        }
                // Create a vector to store the final result
        vector<vector<string>>ans;
                // Iterate through the map and push the vectors of anagrams into the final result vector

        for(auto it: mp){
            ans.push_back(it.second);
        }
                // Return the final result
    return ans;

    }
};

//Example:

// For the input ["eat", "tea", "tan", "ate", "nat", "bat"], the map would look like:
// json
// Copy code
// {
//     "aet": ["eat", "tea", "ate"],
//     "ant": ["tan", "nat"],
//     "abt": ["bat"]
// }
// The final result vector (ans) would be:
// css
// Copy code
// [    ["eat", "tea", "ate"],
//     ["tan", "nat"],
//     ["bat"]
// ]
