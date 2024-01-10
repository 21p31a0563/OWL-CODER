class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int index = 0;
        if (arr.size() == 1) {
            return 0;
        }
        int maxe = INT_MIN;
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] > maxe) {
                maxe = arr[i];
                index = i;
            }
        }
        return index;
    }
};
