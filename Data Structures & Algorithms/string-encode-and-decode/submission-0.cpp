class Solution {
    int next_key = 0;
    unordered_map<string, vector<string>> mp;
public:

    string encode(vector<string>& strs) {
        string key = to_string(next_key++);
        mp[key] = strs;
        return key;
    }

    vector<string> decode(string s) {
        return mp[s];
    }
};
