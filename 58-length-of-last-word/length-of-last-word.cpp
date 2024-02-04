class Solution {
public:
    int lengthOfLastWord(string s) {
         bool val=false;
        int cnt=0;
        for(int i=s.length()-1;i>=0;i--)
        {
            if(s[i]==' '){
                if(val)
                break;
            }
            else{
                 val=true;
                cnt++;
            }
        }
        return cnt;
    }
};