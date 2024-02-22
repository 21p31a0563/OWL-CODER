class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int l=left;
        int r=right;
        int cnt=0;
        while(l!=r){
            l=l>>1;
            r=r>>1;
            cnt++;
        }
        return (l<<cnt);
    
}};