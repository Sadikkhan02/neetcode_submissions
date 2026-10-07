class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
      map<int, int> freq;
        for (auto i : nums) {
            freq[i]++;
        }

        vector<pair<int, int>> ans;
        for (auto p : freq) {
            ans.push_back({p.second, p.first});
        }
        sort(ans.rbegin(), ans.rend());

        vector<int> res;
        for (int i = 0; i < k; i++) {
            res.push_back(ans[i].second);
        }
        return res;
        
    }
};
