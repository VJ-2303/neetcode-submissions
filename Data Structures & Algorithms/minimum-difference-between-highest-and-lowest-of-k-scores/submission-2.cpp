class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        int n = nums.size();

        int minDiff = INT_MAX;

        for(int i = k - 1; i < n ;i++) {
            int diff = nums[i] - nums[i - k + 1];
            minDiff = min(diff, minDiff);
        }
        return minDiff;
    }
};