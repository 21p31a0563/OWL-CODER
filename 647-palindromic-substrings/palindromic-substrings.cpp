class Solution {
public:
    int countSubstrings(string s) {
        int count=0;
        for(int i=0;i<s.length();i++){
            string s2="";
            for(int j=i;j<s.length();j++){
                s2+=s[j];
                string reversed=s2;
                reverse(reversed.begin(),reversed.end());
                if(s2==reversed)
                {
                    count++;
                }

            }
        }
        return count;
    }
};