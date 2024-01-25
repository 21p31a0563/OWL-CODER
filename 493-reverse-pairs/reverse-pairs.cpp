class Solution {
public: 
    int pairCount=0;
    void merge(vector<int>& nums,int low,int mid,int high){
        int total=0;
        int i=low;
        int j=mid+1;
        // only this piece of code is include else whole code is same as a merge sort
    // incode from line 10-18 we only count the number of 2*nums[j] are smaller than nums[i]
        while(i<=mid)
        {
            while(j<=high && nums[i]>(long long)2*nums[j])
            {
                j++;
            }
            total+=(j-(mid+1));
            i++;
        }        
        //now perform merge function to set elements in the correct posn 
        vector<int> temp;
        i=low;
        j=mid+1;
 //apply merge sort for the set the element to their correct position
        while(i<=mid && j<=high){
            if(nums[i]<nums[j]){
                temp.push_back(nums[i++]);
            }else{
                temp.push_back(nums[j++]);
            }
        }
        //mrege remaining left halves elements
        while(i<=mid){
            temp.push_back(nums[i++]);
        }
         //mrege remaining right halves elements
        while(j<=high){
            temp.push_back(nums[j++]);
        }
        // move all elements from temp array to original(nums) array
        for(int it=low;it<=high;it++){
            nums[it]=temp[it-low];
        }
        pairCount+=total;
    }
    void mergeSort(vector<int>& nums,int low,int high){
        if(low<high){
            int mid=low+(high-low)/2;
            mergeSort(nums,low,mid);
            mergeSort(nums,mid+1,high);
            merge(nums,low,mid,high);
        }
    }
    int reversePairs(vector<int>& nums) {
        mergeSort(nums,0,nums.size()-1);
        return pairCount;
    }
    };