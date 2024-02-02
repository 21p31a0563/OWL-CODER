class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
       vector<int>v;
        for(int i=1;i<=9;i++){
            int num=i;
            int nextdigit=i+1;
            while(num<=high && nextdigit<=9){
                num=num*10+nextdigit;
                if(num>=low && num<=high){
                    v.push_back(num);
                }
                nextdigit++;
            }

        }
        sort(v.begin(),v.end());
        return v;
        


    }
};