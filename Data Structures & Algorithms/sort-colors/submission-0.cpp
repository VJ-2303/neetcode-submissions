class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero = 0, one = 0, two = 0;
        for(int num : nums) {
            if (num == 0) {
                zero++;
            } else if (num == 1) {
                one++;
            } else {
                two++;
            }
        }
        int i = 0;
        for(; i < zero ; i++) {
            nums[i] = 0;
        }
        for(; i < one + zero ; i++) {
            nums[i] = 1;
        }
        for(; i < two + one + zero ; i++) {
            nums[i] = 2;
        }
    }
};