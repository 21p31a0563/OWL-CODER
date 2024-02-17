class Solution {
private:
    // Function to check if it's possible to reach the building at index p
    bool check(vector<int>& heights, int bricks, int ladders, int p) {
        int rem_brick = bricks;
       vector<int> need;

        for (int i = 0; i < p; i++) {
            if (heights[i + 1] > heights[i]) {
                need.push_back(heights[i + 1] - heights[i]);
            }
        }

        // Sort in ascending order
      sort(need.begin(), need.end());
      reverse(need.begin(),need.end());

        while (!need.empty() && rem_brick >= need.back()) {
            rem_brick -= need.back();
            need.pop_back();
        }

        return ladders >= need.size();
    }

public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        int n = heights.size();
        int low = 0;
        int high = n;

        // Binary search
        while (low < high - 1) {
            int mid = low + (high - low) / 2;

            if (check(heights, bricks, ladders, mid))
                low = mid;
            else
                high = mid;
        }

        return low;
    }
};
