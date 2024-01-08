class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>v;
     
            for(int i=0;i<=n;i++){
                int num=i;
                int c=0;
                       while(num>0){
                    if((num&1)==1){
                        c++;
                    }
                    num>>=1;
               
            }
            v.push_back(c);
             
        }
        return v;
        
    }
};