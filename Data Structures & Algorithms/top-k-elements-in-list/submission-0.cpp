class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            freq[nums[i]]++;
        }
        vector<pair<int, int>> a;
        for (const auto& [key, value] : freq) {
            a.push_back({value, key});
        }
        sort(a.begin(), a.end(), greater<>());
        vector<int> ans;
        for(int i = 0 ; i < k ;i++) {
            ans.push_back(a[i].second);
        }
        return ans;
    }
};
