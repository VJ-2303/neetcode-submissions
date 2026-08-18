class Solution {
   public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int i = 0, j = 0;
        int sum = 0;
        while (j < k) {
            sum += arr[j++];
        }
        int valid = 0;

        if (sum / k >= threshold) {
            valid++;
        }

        int n = arr.size();

        while (j < n) {
            sum += arr[j++];
            sum -= arr[i++];

            if (sum / k >= threshold) {
                valid++;
            }
        }
        return valid;
    }
};