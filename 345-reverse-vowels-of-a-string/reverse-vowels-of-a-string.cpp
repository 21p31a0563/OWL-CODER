class Solution {
public:
    string reverseVowels(string s) {
        int i=0;
        int j=s.size()-1;
        while(i<j){
            while(i<j&&!isVowels(s[i])){
                i++;
            }
            while(i<j&&!isVowels(s[j])){
                j--;
            }
            if(i<j){
                char temp=s[i];
                s[i]=s[j];
                s[j]=temp;
                i++;
                j--;
            }

        }
        return s;

    }
    bool isVowels(char c){
        return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
    }
};