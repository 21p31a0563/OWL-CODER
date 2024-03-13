class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();
        int i=0;
        int index=0;
        while(i<n){
            char curr_char=chars[i];
            int count=0;

            while(i<n&&chars[i]==curr_char){
                count++;
                i++;
            }
            chars[index++]=curr_char;
            if(count>1){
                string char_count=to_string(count);
                for(auto c:char_count){
                    chars[index++]=c;
                }
            }
        }
        return index;
    }
};