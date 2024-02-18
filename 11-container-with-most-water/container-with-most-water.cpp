class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxarea=INT_MIN;
        int i=0;
        int j=height.size()-1;
        while(i!=j){
            int k=min(height[i],height[j]);
            int area=(j-i)*k;
            maxarea=max(maxarea,area);
            if(height[i]<height[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return maxarea;
    }
};