class Solution {
public:
    bool halvesAreAlike(string s) {
        int n=s.length();
        int a=0;
        int b=0;
        for(int i=0;i<n/2;i++){
            char c=tolower(s[i]);
            if(c=='a' or c=='e' or c=='i' or c=='o' or c=='u'){
                a++;
            }


        }
        for(int j=n/2;j<n;j++){
            char c=tolower(s[j]);
            if(c=='a' or c=='e' or c=='i' or c=='o' or c=='u'){
                b++;
            }
        }
        if(a==b){
            return true;
        }
        return false;

    }
};