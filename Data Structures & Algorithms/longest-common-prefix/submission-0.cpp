class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prev = strs[0];
        int till = strs[0].size();

        for (int i = 1 ; i < strs.size() ; i++) {
            int m = strs[i].size();
            int to = min(till, m);
            int j;
            for(j = 0; j < to; j++) {
                if(prev[j] != strs[i][j]) {
                    break;
                }
            } 
            till = j;
        }
        if (till > 0) {
            return prev.substr(0, till);
        }else {
            return "";
        }
    }
};