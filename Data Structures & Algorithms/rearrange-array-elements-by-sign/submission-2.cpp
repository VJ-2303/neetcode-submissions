class Solution {
   public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int pos = 0, neg = 1;
        
        vector<int> res(nums.size());

        for(int n : nums) {
            if(n > 0) {
                res[pos] = n;
                pos += 2;
            } else {
                res[neg] = n;
                neg+= 2;
            }
        }
        return res;
    }
};