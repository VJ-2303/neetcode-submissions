class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i = 0, j = 0;
        int n1 = word1.length();
        int n2 = word2.length();

        string ans = "";

        int k = min(n1, n2);

        while(i < k) {
            ans.push_back(word1[i++]);
            ans.push_back(word2[j++]);
        }
        while(i < n1) {
            ans += word1[i++];
        }
        while(j < n2) {
            ans += word2[j++];
        }
        return ans;
    }
};