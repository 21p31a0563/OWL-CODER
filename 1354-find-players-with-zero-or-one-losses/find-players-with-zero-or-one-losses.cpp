class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int, int> winner;
        unordered_map<int, int> looser;

        for (auto it : matches) {
            winner[it[0]]++;
            looser[it[1]]++;
        }

        vector<int> notlost;
        vector<int> lost1;

        for (auto it : winner) {
            int playerId = it.first;
            if (looser.find(playerId) == looser.end()) {
                notlost.push_back(playerId);
            }
        }

        for (auto it : looser) {
            int playerId = it.first;
            if (it.second == 1) {
                lost1.push_back(playerId);
            }
        }

        sort(notlost.begin(), notlost.end());
        sort(lost1.begin(), lost1.end());

        vector<vector<int>> ans;
        ans.push_back(notlost);
        ans.push_back(lost1);

        return ans;
    }
};
