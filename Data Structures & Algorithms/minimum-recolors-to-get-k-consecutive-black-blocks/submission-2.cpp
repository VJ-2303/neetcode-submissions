class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int curr_white=0;
        int l = 0, r = 0;
        while(r < k) {
            if(blocks[r++] == 'W') {
                curr_white++;
            }
        }
        int n = blocks.size();
        int minOp = curr_white;
        while(r < n) {
            if(blocks[r] == 'W') {
                curr_white++;
            }
            if(blocks[l] == 'W') {
                curr_white--;
            }
            l++;
            minOp = min(minOp, curr_white);
            r++;
        }
        return minOp;
    }
};