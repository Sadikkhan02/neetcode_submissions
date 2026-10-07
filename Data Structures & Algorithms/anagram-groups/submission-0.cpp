class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> ans;

        for(auto s: strs){
            string sortString = s;

            sort(sortString.begin(), sortString.end());

            ans[sortString].push_back(s);

        }

        vector<vector<string>> res;

        for(auto s : ans){
            res.push_back(s.second);
        }

        return res;
        
    }
};
