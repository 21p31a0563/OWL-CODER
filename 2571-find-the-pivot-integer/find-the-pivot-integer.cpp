class Solution {
public:
    int pivotInteger(int n) {
        int sum1=(n*(n+1)/2);
        int i=n;
        int sum2=n;
        while(sum1>=sum2){
            if(sum1==sum2) return i;
            else{
                sum1-=i;
                i=i-1;
                sum2+=i;
            }
        }
        return -1;
    }
};