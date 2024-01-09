class Solution {
public:
    int smallestEvenMultiple(int n) {
        int res=0;
        for(int i=1;i<=2*n;i++)
        {
            if(i%n==0 && i%2==0)
            {
                res=i;
                break;

            }
        }
        return res;
        
    }
};