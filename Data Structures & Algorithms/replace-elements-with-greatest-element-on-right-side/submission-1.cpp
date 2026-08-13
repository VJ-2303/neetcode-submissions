class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int greatest = -1;
        int n = arr.size();
        vector<int> ans(n, -1);
        for(int i = n - 1 ; i >= 0 ; i--) {
            ans[i] = greatest;
            greatest = max(greatest, arr[i]);
        }
        return ans;
    }
};