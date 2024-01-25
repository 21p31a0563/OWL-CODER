class Solution {
public:
    int count=0;
    void merge(vector<int>&nums,int low ,int mid,int high){
        int total=0;
        int i=low;
        int j=mid+1;
        while(i<=mid){
            while(j<=high&&nums[i]>(long long)2*nums[j])
            {
                j++;
            }
            total+=(j-(mid+1));
            i++;
        }
        vector<int>temp;
        i=low;
        j=mid+1;
        while(i<=mid&&j<=high){
            if(nums[i]<nums[j]){
                temp.push_back(nums[i++]);
            }
            else{
                temp.push_back(nums[j++]);
            }

        }
        while(i<=mid){
            temp.push_back(nums[i++]);

        }
        while(j<=high){
            temp.push_back(nums[j++]);
        }
        for(int i=low;i<=high;i++){
            nums[i]=temp[i-low];
        }
        count+=total;
    }
    void mergesort(vector<int>&nums,int low,int high){
        if(low<high){
            int mid=low+(high-low)/2;
            mergesort(nums,low,mid);
            mergesort(nums,mid+1,high);
            merge(nums,low,mid,high);
        }
    }

    int reversePairs(vector<int>& nums) {
        mergesort(nums,0,nums.size()-1);
        return count;
    }
};