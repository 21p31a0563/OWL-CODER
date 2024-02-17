class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        int i;
        priority_queue<int,vector<int>>pq;
        for(int i=0;i<heights.size()-1;i++)
        {
            int diff=heights[i+1]-heights[i];
            if(diff>0){
                //we need to use bricks or ladders
                bricks-=diff;
                pq.push(diff);
                if(bricks<0){
                    if(ladders<=0)return i;
                    int getbackbricks=pq.top();
                    bricks+=getbackbricks;
                    ladders--;
                    pq.pop();

                }
            }
        }
        return i;
    }
};