class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        unordered_map<string, vector<int>> mp;
        for(int i = 0; i < n; i++){
            string sorted = strs[i];
            sort(sorted.begin(), sorted.end());
            mp[sorted].push_back(i);
        }
        
        vector<vector<string>> ans;
        for(auto x: mp){
            ans.push_back({});
            for(int y: x.second)
                ans.back().push_back(strs[y]);
        }
        return ans;
    }
};