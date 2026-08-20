class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> res;

        for(const auto& s: strs) {
            array<int, 26> count{};
            
            for (char c : s) {
                count[c - 'a']++;
            }
            string key;
            key.reserve(26);

            for(int x : count) {
                key.push_back(static_cast<char>(x));
            }

            res[key].push_back(s);
        }
        vector<vector<string>> results;
        for(const auto& [key, value] : res) {
            results.push_back(value);
        }
        return results;
    }
};
